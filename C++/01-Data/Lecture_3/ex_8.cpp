#include <iostream>
#include <vector>

int main()
{
    int size;
    std::vector<int> vec;
    while(true)
    {
        std::cout << "Enter size => ";
        std::cin >> size;
        vec.resize(size);
        vec.shrink_to_fit();

        for (int i = 0; i < vec.size(); i++)
        {
            vec[i] = std::rand() % 100;
            std::cout<<vec[i]<<std::endl;
        }
    }
    return 0;
}