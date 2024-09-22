#include <iostream>

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        std::cout << "Enter element => ";
        std::cin >> arr[i];
    }
    int min,max;
    max = arr[0];
    min = arr[0];

    for (int i = 1; i < 10; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    std::cout << "Max => "<<max<<std::endl;
    std::cout <<"Min => "<<min<<std::endl;
    return 0;
}