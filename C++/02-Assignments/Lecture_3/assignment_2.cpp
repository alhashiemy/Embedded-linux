#include <iostream>
#include <string>


double add(double &x, double &y);
double sub(double &x, double &y);
double mul(double &x, double &y);
double divide(double &x, double &y);

int main()
{
    double x,y;
    std::string op;

    std::cout << "Choose operation:\n" << "1- add for Addition\n" << "2- sub Subtruction\n";
    std::cout << "3- mul for Multiplication\n" << "4- div for Divition\n" ;
    std::cin  >> op;
    if(op == "add")
    {
        std::cout << "Enter two numbers: ";
        std::cin  >> x >> y;
        std::cout << "Result: " << add(x,y);
    }
    else if (op == "sub")
    {
        std::cout << "Enter two numbers: ";
        std::cin  >> x >> y;
        std::cout << "Result: " << sub(x,y);
    }
    else if (op == "mul")
    {
        std::cout << "Enter two numbers: ";
        std::cin  >> x >> y;
        std::cout << "Result: " << mul(x,y);
    }
    else if (op == "div")
    {
        std::cout << "Enter two numbers: ";
        std::cin  >> x >> y;
        std::cout << "Result: " << divide(x,y);
    }
    else
    {
        std::cout << "invalid operation";

    }
    return 0;
}

double add(double &x, double &y)
{
    return x+y;
}

double sub(double &x, double &y)
{
    return x-y;
}

double mul(double &x, double &y)
{
    return x*y;
}

double divide(double &x, double &y)
{
    if(y != 0)
    {
        return (double)(x/y);
    }
    else 
     std::cout << "Cannot divide by 0";
}