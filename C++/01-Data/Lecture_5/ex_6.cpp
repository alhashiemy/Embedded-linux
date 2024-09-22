#include <iostream>

void Add(int x ,int y)
{
    std::cout << "Hello from Int func....."<<std::endl;
    std::cout << "X + Y = "<<x+y<<std::endl;
}
void Add(float x,float y)
{
    std::cout << "Hello from float func....."<<std::endl;
    std::cout << "X + Y = "<<(float)(x+y)<<std::endl;
}
void Add(std::string x = "Ahmed",std::string y = "Mohamed")
{
    std::cout << "Hello from std::string func....."<<std::endl;
    std::cout << "X + Y = "<<x + y<<std::endl;
}
int main()
{
    Add();
    return 0;
}