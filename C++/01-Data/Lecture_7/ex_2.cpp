#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

int main()
{
    std::string sen;
    std::cout << "Enter sentence => ";
    getline(std::cin,sen);

    std::vector<std::string> vec;
    std::stringstream ss(sen);

    std::string temp;
    while(ss >> temp)
    {
        vec.push_back(temp);
    }
    std::reverse(vec.begin(),vec.end());

    for (int i = 0; i < vec.size(); i++)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << "\n";
    return 0;
}