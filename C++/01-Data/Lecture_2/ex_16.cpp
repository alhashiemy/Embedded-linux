#include <iostream>

int main()
{
    for (int i = 5 ; i < 101 ; i++)
    {
        if((i % 3 == 0)&&(i % 5 == 0))
        {
            std::cout<<i<<std::endl;
        }
    }
    
    return 0;
}