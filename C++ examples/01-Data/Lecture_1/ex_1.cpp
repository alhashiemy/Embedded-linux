#include <iostream>

int main()
{
    double EUR,USD; 
    const double value = 1.19;
    std::cout << "------------ Welcome to the EUR to USD Converter --------------" << std::endl;
    std::cout << "Enter the value in EUR => ";
    std::cin >> EUR;
    USD = EUR * value;
    std::cout << EUR << " is equivelent to "<<USD<<std::endl;

    return 0;
}