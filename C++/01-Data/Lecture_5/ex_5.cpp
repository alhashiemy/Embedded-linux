#include <iostream>

void print(int x = 500,int y = 400,int z = 300);
int main()
{
    print(10,20,50);
    return 0;
}
void print(int x,int y,int z)
{
    std::cout << "X => "<<x<<std::endl;
    std::cout << "Y => "<<y<<std::endl;
    std::cout << "Z => "<<z<<std::endl;
}