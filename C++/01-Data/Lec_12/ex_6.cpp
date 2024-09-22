#include <iostream>

int Add(int x,int y)
{
    return x+y;
}
double Add(double x,double y)
{
    return x+y;
}
std::string Add(std::string x,std::string y)
{
    return x+y;
}
int main()
{
    std::cout << Add(10,20) << std::endl;
    std::cout << Add(10.3,20.1) << std::endl;
    std::cout << Add("Essam"," Ahmed") << std::endl;
    return 0;
}