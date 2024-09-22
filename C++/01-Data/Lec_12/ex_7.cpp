#include <iostream>

template<typename T>
T Add(T x,T y)
{
    return x+y;
}

int main()
{
    std::cout << Add<int>(10,20) << std::endl;
    std::cout << Add<double>(10.3,20.1) << std::endl;
    std::cout << Add<std::string>("Essam"," Ahmed") << std::endl;
    return 0;
}