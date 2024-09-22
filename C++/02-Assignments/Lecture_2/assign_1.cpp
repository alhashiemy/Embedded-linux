#include <iostream>

int main()
{
    int height;
    for(;;)
    {
        std::cout << "Please enter the triangle height: ";
        std::cin  >> height;
        for(int i = 0; i <= height ; i++)
        {
            for(int j = 0; j < i; j++)
            {
                std::cout << j+1 ;
            }
            std::cout << "\n";
        }
        std::cout << "Hit any key to continue..";
        std::cin  >> height;
    }

    return 0;
}