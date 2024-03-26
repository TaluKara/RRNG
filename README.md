# RRNG (Random Random Number Generator)

RRNG, or Random Random Number Generator, is a C++ program designed to generate random numbers with varying degrees of complexity. It leverages a unique seed generation strategy, making the randomness customizable according to the user's preference. This program can be particularly useful for applications requiring random number generation with specific characteristics or for educational purposes to demonstrate how randomness can be manipulated and controlled.

## Features

- **Custom Complexity Levels**: Choose from five distinct levels of complexity (Weak, Fair, Medium, Strong, Very Strong) to generate random numbers.
- **Customizable Number Length**: Users can specify the length of the random number generated, offering flexibility for different use cases.
- **Seed Calculation Function**: A special formula calculates the seed for the random number generator, adding an extra layer of uniqueness to each generation process.
- **Iterative Generation Process**: The program iteratively generates random numbers, updating the seed with each iteration, to ensure a high degree of randomness.

## Requirements

- C++ Compiler (GCC, Clang, MSVC, etc.)
- Standard C++ Library
- C++11 or later

## Installation

To run RRNG, you need to have a C++ environment set up on your computer. If you already have a C++ compiler installed, follow these steps:

1. **Clone the Repository**

   ```
   git https://github.com/TaluKara/RRNG.git
   ```

2. **Navigate to the RRNG Directory**

   ```
   cd RRNG
   ```

3. **Compile the Program**

   Using GCC or Clang:
   ```
   g++ main.cpp -o rrng
   ```

4. **Run the Program**

   ```
   ./rrng
   ```

## Usage

When you run RRNG, the program will prompt you to select the complexity of the random number to be generated. The options are:

1. Weak
2. Fair
3. Medium
4. Strong
5. Very Strong

After selecting the complexity, you will be asked to specify how many digits the generated number should have.

Based on your input, RRNG will calculate a seed, generate random numbers iteratively, and display the last generated number in the sequence.

## Contributing

Contributions to RRNG are welcome! Whether it's bug reports, feature requests, or contributions to code, please feel free to make an issue or pull request on GitHub.

## License

RRNG is open-source software licensed under the MIT License. See the LICENSE file for more details.
