#include <iostream>

int main()
{
    int arr[] = {1,1,4,1,4,4,6,4,6,6};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i <= size -1 ; i++)
    {
        for (int j = 0; j <= size - 1 - i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    // for (int i = 0; i < size; i++)
    // {
    //     std::cout<<arr[i]<<std::endl;
    // }
    int count = 1;
    for (int i = 0; i < size; i++)
    {
        if((arr[i] == arr[i+1])&&(i < (size-1)))
        {
            count++;
        }
        else
        {
            std::cout<<arr[i]<<" has repeated => "<<count<<std::endl;
            count = 1;
        }
    }
    
    return 0;
}