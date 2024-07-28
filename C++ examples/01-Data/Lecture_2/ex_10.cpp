#include <iostream>

int main()
{
    int x = 20;
    int y = 50;
    switch(x)
    {
        case (10):
        {
            std::cout<<"x = 10"<<std::endl;
            break;
        }
        case (20):
        {
            std::cout<<"x = 20"<<std::endl;
        }
        y++;
        default:
        {
            std::cout<<"x is invalid value"<<std::endl;
            break;
        }
        case (30):
        {
            std::cout<<"x = 30"<<std::endl;
            break;
        }

    }
    std::cout<<"y => "<<y<<std::endl;
    return 0;
}