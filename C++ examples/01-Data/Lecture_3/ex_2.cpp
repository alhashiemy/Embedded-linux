#include <iostream>
#include <algorithm>

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        std::cout<<"Enter element_"<<i+1<<" => ";
        std::cin >> arr[i];
    }

    int i = 0;
    int j = 9;
    while (i < j)
    {
        // arr[i] ^= arr[j];
        // arr[j] ^= arr[i];
        // arr[i] ^= arr[j];
        // arr[i] = arr[i] + arr[j];
        // arr[j] = arr[i] - arr[j];
        // arr[i] = arr[i] - arr[j];
        std::swap(arr[i],arr[j]);
        i++;
        j--;
    }


    for (int i = 0; i < 10; i++)
    {
        std::cout<<arr[i]<<std::endl;
    }
    
}