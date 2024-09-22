#include <iostream>

template<typename T>
T Formala(T x,int n)
{
    T sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum += (x*i);
    }
    return sum;
}
int main()
{
    std::cout << Formala<int>(4,10) << std::endl;
    std::cout << Formala<double>(2.156,5) << std::endl;
    return 0;
}