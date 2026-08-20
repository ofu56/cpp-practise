#include <iostream>

int main()
{
    std::cout << "Enter your first number : ";

    double num1{};
    std::cin >> num1;

    std::cout << "Eneter your operation (+ , * ,- , /) : ";

    char operation{};
    std::cin >> operation;

    std::cout << "Enter your second number : ";

    double num2{};
    std::cin >> num2;

    if (operation == '+')
    {
        std::cout << num1 << " + " << num2 << " is equal to " << num1+num2;
    }
    
    else if (operation == '-')
    {
        std::cout << num1 << "-" << num2 << " is equal to" <<num1-num2;
    } 
    
    else if (operation == '*')
    {
        std::cout << num1 << "*" << num2 << " is equal to " << num1*num2;
    }
    
    else if (operation == '/')
    {
        std::cout << num1 << "/" << num2 << " is equal to " << num1/num2;
    }
    
    else
    {
        std::cout << "Error";
    }
    
    
    return 0;

}

