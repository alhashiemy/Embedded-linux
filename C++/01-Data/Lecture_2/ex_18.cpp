#include <iostream>

int main()
{
    int num;
    while(true)
    {
        std::cout << "Enter any number => ";
        std::cin >> num;
        if(num < 100)
        {
            break;
        }
    }
    return 0;
}