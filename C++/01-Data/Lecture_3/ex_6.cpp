#include <iostream>

int main()
{
    int arr1[3][4];
    int arr2[3][4];
    int arr3[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout<<"Enter element["<<i<<"]["<<j<<"] =>";
            std::cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout<<"Enter element["<<i<<"]["<<j<<"] =>";
            std::cin >> arr2[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout<<arr3[i][j]<<" ";
        }
        std::cout<<"\n";
    }
    return 0;
}