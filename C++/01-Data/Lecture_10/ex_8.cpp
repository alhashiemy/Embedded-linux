#include <iostream>
#include <memory>

int main()
{
    std::unique_ptr<int[]> uptr = std::make_unique<int[]>(5);

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Enter element_"<<i+1<<" => ";
        std::cin>>uptr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        std::cout << uptr[i] << " ";
    }
    std::cout << "\n";
    return 0;
}