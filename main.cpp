// src/main.cpp
#include <iostream>

int main() {
    std::cout
        << "=== Calculator ===\n"
        << "Type an expression or 'exit' to leave"
        << std::endl;

    while (true) {
        std::cout << "\n> ";
        std::string input;
        std::getline(std::cin, input);

        if (input == "exit") {
            std::cout << "Bye!\n";
            break;
        }

        std::cout
            << "you entered: "
            << input
            << "\n";
    }

    return 0;
}