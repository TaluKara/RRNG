#include <iostream>
#include <random>

using namespace std;

// Function to generate a random number between 10 and 20
int generateInitialRandomNumber() {
    // Create a random device
    random_device rd;
    // Initialize a Mersenne Twister pseudo-random number generator
    mt19937 gen(rd());
    // Uniform distribution between 10 and 20
    uniform_int_distribution<> distr(10, 20);

    // Generate and return a random number
    return distr(gen);
}

// Function to generate a random number using a custom seed
int generateRandomNumberWithCustomSeed(unsigned int seed) {
    // Initialize a Mersenne Twister pseudo-random number generator with the custom seed
    mt19937 gen(seed);
    // Uniform distribution between 10 and 20
    uniform_int_distribution<> distr(10, 20);

    // Generate and return a random number
    return distr(gen);
}

int main() {
    // Generate an initial random number x between 10 and 20
    int x = generateInitialRandomNumber();
    cout << "Initial random number (x): " << x << endl;

    // Loop x times
    for (int i = 0; i < x; ++i) {
        // Generate a new seed for each iteration
        unsigned int newSeed = generateInitialRandomNumber();
        // Use the new seed to generate a random number
        int randomNumber = generateRandomNumberWithCustomSeed(newSeed);
        cout << "Random number in iteration " << i+1 << ": " << randomNumber << endl;
    }

    return 0;
}
