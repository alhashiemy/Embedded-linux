#include <iostream>

void Add(int x,int y)
{
    std::cout << x + y << std::endl;
}
int main()
{
    void(*pf)(int,int) = NULL;

    // Add(10,20);
    if(pf != nullptr)
    {
        pf(10,20);
    }
    else
    {
        std::cout<<"nullptr"<<std::endl;
    }
    return 0;
}