#include <iostream>

int main()
{
    int sum = 0;
    int temp;
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Enter element_"<<i+1<<" => ";
        std::cin>>temp;
        sum = sum + temp;
    }
    std::cout << "Summation => "<<sum<<std::endl;
    return 0;
}