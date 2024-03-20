#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

long long calculateSeed(int x) {
    return x*x*x + 5*x*x + 9*x - 2; //CUSTOMIZE THIS FUNCTION FOR MAXIMUM PRIVACY
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
    std::cout << "How complex should the generated number be?\n"
              << "1) Weak\n"
              << "2) Fair\n"
              << "3) Medium\n"
              << "4) Strong\n"
              << "5) Very Strong\n"
              << "Your choice: ";
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
            std::cout << "Invalid choice. Exiting the program...";
            return 1;
    }

    int y;
    std::cout << "How many digits should the number have: ";
    std::cin >> y;

    long long seed = calculateSeed(x);
    std::string lastRandomNumber;

    for(int i = 0; i < x; ++i) {
        lastRandomNumber = generateRandomNumber(seed, y);
        seed = std::stoll(lastRandomNumber.substr(0, lastRandomNumber.length() < 10 ? lastRandomNumber.length() : 10)) % 100000;
    }

    std::cout << "The last generated number: " << lastRandomNumber << std::endl;

    return 0;
}
