// src/main.cpp
#include <Calculator.hpp>

#include <iostream>
#include <string>

int main() {
    std::cout
        << "=== Calculator ===\n"
        << "Type an expression or 'exit' to leave"
        << std::endl;
    
    Calculator calc;

    while (true) {
        std::cout << "\n> ";
        std::string input;
        std::getline(std::cin, input);

        if (input == "exit") {
            std::cout << "Bye!\n";
            break;
        }

        try {
            double result = calc.evaluate(input);
            std::cout
                << "Result: "
                << result
                << "\n";
        } catch (const std::exception& e) {
            std::cerr
                << "Error: "
                << e.what()
                << "\n";
        }
    }

    return 0;
}