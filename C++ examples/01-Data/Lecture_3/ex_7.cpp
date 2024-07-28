#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    std::vector<int> vec1 = {1,2,3,4,5,6,7};
    std::vector<int> vec2 = {10,20,30};

    vec2.swap(vec1);
    // vec2 = vec1;
    for (int i = 0; i < vec2.size() ; i++)
    {
        std::cout << vec2[i] << std::endl;
    }
    std::cout <<"size => "<<vec2.size() << std::endl;
    std::cout <<"capacity => "<<vec2.capacity() << std::endl;

    vec2.push_back(100);
    vec2.push_back(100);
    vec2.push_back(100);
    vec2.push_back(100);
    vec2.push_back(100);
    vec2.push_back(100);

    std::cout <<"size => "<<vec2.size() << std::endl;
    std::cout <<"capacity => "<<vec2.capacity() << std::endl;

    vec2.push_back(100);
    vec2.push_back(100);
    vec2.push_back(100);

    std::cout <<"size => "<<vec2.size() << std::endl;
    std::cout <<"capacity => "<<vec2.capacity() << std::endl;

    vec2.resize(3);
    vec2.shrink_to_fit();
    std::cout << vec2[5] << std::endl;

    std::cout <<"size => "<<vec2.size() << std::endl;
    std::cout <<"capacity => "<<vec2.capacity() << std::endl;
    // vec.clear();
    // if(vec.empty())
    // {
    //     std::cout << "Vector is empty..."<<std::endl;
    // }
    return 0;
}