#include <iostream>

enum CPP
{
    VALUE = 1
};
int main()
{
    double EUR,USD;
    const double value = 1.19;
    std::cout << "--------- Welcome to EUR to USD Converter ------------\n";
    std::cout << "Enter EUR => ";
    std::cin >> EUR;
    USD = EUR * value;
    std::cout << EUR << " is equal " << EUR * 1.19 <<" dollars"<<std::endl;
    return 0;
}