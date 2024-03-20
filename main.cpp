#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

long long calculateSeed(int x) {
    return x*x*x + 5*x*x + 9*x - 2;
}

std::string generateRandomNumber(int seed, int y) {
    srand(seed);
    std::string number = "";
    for(int i = 0; i < y; ++i) {
        number += std::to_string(rand() % 10);
    }
    return number;
}

int main() {
    srand(time(0));

    int complexity;
    std::cout << "Oluşturulacak sayı ne kadar karmaşık olsun?\n"
              << "1) Zayıf\n"
              << "2) İdare Eder\n"
              << "3) Orta\n"
              << "4) Güçlü\n"
              << "5) Çok Güçlü\n"
              << "Seçiminiz: ";
    std::cin >> complexity;

    int x;
    switch(complexity) {
        case 1:
            x = 1 + rand() % 20;
            break;
        case 2:
            x = 21 + rand() % (50 - 21 + 1);
            break;
        case 3:
            x = 51 + rand() % (100 - 51 + 1);
            break;
        case 4:
            x = 200 + rand() % (1000 - 200 + 1);
            break;
        case 5:
            x = 2000 + rand() % (5000 - 2000 + 1);
            break;
        default:
            std::cout << "Geçersiz seçim. Programdan çıkılıyor...";
            return 1;
    }
    std::cout << "Fonksiyonların tekrar sayısı: " << x << std::endl;

    int y;
    std::cout << "Kaç basamaklı bir sayı oluşturmak istiyorsunuz: ";
    std::cin >> y;

    long long seed = calculateSeed(x);

    for(int i = 0; i < x; ++i) {
        std::string randomNumber = generateRandomNumber(seed, y);
        std::cout << i+1 << ". Üretilen sayı: " << randomNumber << std::endl;
        seed = std::stoll(randomNumber.substr(0, randomNumber.length() < 10 ? randomNumber.length() : 10)) % 100000;
    }

    return 0;
}
