#include <iostream>
#include <cstdlib>
#include <ctime>

long long calculateSeed(int x) {
    return x*x*x + 5*x*x + 9*x - 2;
}

long long generateRandomNumber(int seed, int y) {
    srand(seed);
    long long number = 0;
    for(int i = 0; i < y; ++i) {
        number = number * 10 + (rand() % 10);
    }
    return number;
}

int main() {
    srand(time(0));

    int x = 10 + rand() % 11;
    std::cout << "Fonksiyonların tekrar sayısı: " << x << std::endl;

    int y;
    std::cout << "Kaç basamaklı bir sayı oluşturmak istiyorsunuz: ";
    std::cin >> y;

    long long seed = calculateSeed(x);

    for(int i = 0; i < x; ++i) {
        long long randomNumber = generateRandomNumber(seed, y);
        std::cout << i+1 << ". Üretilen sayı: " << randomNumber << std::endl;
        seed = randomNumber;
    }

    return 0;
}
