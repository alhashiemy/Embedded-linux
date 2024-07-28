#include <iostream>
#include <cstring>

int main()
{
    char str[100];

    std::cin.getline(str,sizeof(str));

    std::cout<<"---------------------------\n";
    std::cout<<str<<std::endl;
    return 0;
}