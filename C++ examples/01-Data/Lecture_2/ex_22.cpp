#include <iostream>

int main()
{
    double result;
    bool choice;
    std::cout << "Welcome to area calculation programme"<<std::endl;
    do{
        std::cout << "3 * 4 => ";
        std::cin >> result;
    }while(result != 12);
    std::cout<<"thanks"<<std::endl;
    return 0;
}