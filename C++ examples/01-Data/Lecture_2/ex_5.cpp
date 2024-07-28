#include <iostream>

int main()
{
    int num1,num2;
    std::cout << "Enter num1 => ";
    std::cin >> num1;
    std::cout << "Enter num2 => ";
    std::cin >> num2;

    std::cout << "num1 > num2 => " << std::boolalpha << (num1 > num2) << std::endl;
    std::cout << "num1 < num2 => " <<  (num1 < num2) << std::endl;
    std::cout << "num1 != num2 => " <<  (num1 != num2) << std::endl;
    std::cout << "num1 >= num2 => " <<  (num1 >= num2) << std::endl;
    std::cout << "num1 <= num2 => " <<  (num1 <= num2) << std::endl;
    std::cout << "num1 == num2 => " <<  (num1 == num2) << std::endl;
    return 0;
}