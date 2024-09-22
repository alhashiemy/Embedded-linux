#include <iostream>

int main()
{
    for (int i = 1; i < 101 ; i+=10)
    {
        for (int j = i; j < (i+10) ; j++)
        {
            std::cout<<j<<" ";
        }
        std::cout<<"\n";
    }
    return 0;
}