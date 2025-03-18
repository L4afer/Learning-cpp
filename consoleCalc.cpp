#include <iostream>

int main(){

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "------ CALCULATOR ------" << std::endl;

    std::cout <<  "Enter sign (+ - / *)" << std::endl;
    std::cin >> op;
    std::cout << "Enter first number " << std::endl;
    std::cin >> num1;

    std::cout << "Enter second number " << std::endl;
    std::cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        std::cout << "result: " << result << std::endl;
        break;
    case '-':
        result = num1 - num2;
        std::cout << "result: " << result << std::endl;
        break;
    case '*':
        result = num1 * num2;
        std::cout << "result: " << result << std::endl;
        break;
    case '/':
        result = num1 / num2;
        std::cout << "result: " << result << std::endl;
        break;

    }


    std::cout << "---------------------";

    return 0;
}