#include <iostream>
#include <vector>

int main()
{
    std::vector<std::vector<int>> vec1;
    std::vector<std::vector<int>> vec2;
    std::vector<std::vector<int>> vec3;

    for (int i = 0; i < 3; i++)
    {
        std::vector<int> temp;
        for (int i = 0; i < 3; i++)
        {
            int temp_value;
            std::cout << "Enter element => ";
            std::cin >> temp_value;
            temp.push_back(temp_value);
        }
        vec1.push_back(temp);
    }
    for (int i = 0; i < 3; i++)
    {
        std::vector<int> temp;
        for (int i = 0; i < 3; i++)
        {
            int temp_value;
            std::cout << "Enter element => ";
            std::cin >> temp_value;
            temp.push_back(temp_value);
        }
        vec2.push_back(temp);
    }
    vec3.resize(3);
    for (int i = 0; i < 3; i++)
    {
        vec3[i].resize(3);
        for (int j = 0; j < 3; j++)
        {
            vec3[i][j] = vec2[i][j] + vec1[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout<<vec3[i][j]<<" ";
        }
        std::cout<<"\n";
    }
    return 0;
}