#include <iostream>
#include <unistd.h>

int main()
{
    int num;
    std::cout << "Enter number to count down from => ";
    std::cin >> num;
    while(num >= 0)
    {
        std::cout<<num<<std::endl;
        num--;
        sleep(1);
    }
    return 0;
}