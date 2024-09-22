#include <iostream>

int main()
{
    int exp,base;
    std::cout<<"Enter exp => ";
    std::cin >> exp;
    std::cout << "Enter base => ";
    std::cin >>base;

    int i = 1;
    while(exp--)
    {
        i = i * base;
    }
    std::cout<<"Result => "<<i<<std::endl;
    return 0;
}