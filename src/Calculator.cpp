// src/Calculator.cpp
#include "Calculator.hpp"
#include <sstream>
#include <stdexcept>

double Calculator::evaluate(const std::string& expression) {
    std::istringstream iss(expression);
    double a;
    double b;
    char operation;

    iss >> a >> operation >> b;

    if (iss.fail()) {
        throw std::invalid_argument("Invalid expression.");
    }

    switch (operation) {
        case '+':
            return a + b;

        case '-':
            return a - b;

        case '*':
            return a * b;
        
        case '/':
            if (b == 0) {
                throw std::runtime_error("Division by zero.");
            }

            return a / b;

        default:
            throw std::invalid_argument("Operator not supported.");
    }
}