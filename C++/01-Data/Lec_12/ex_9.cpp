#include <iostream>

template<typename T,int SIZE = 3>
void func()
{
    T arr[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = std::rand()%100;
    }
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}
int main()
{
    func<int>();
    std::cout << "-----------------------\n";
    func<int,5>();
}