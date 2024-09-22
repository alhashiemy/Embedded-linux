#include <iostream>
#include <algorithm>

void sort(int* x, int size)
{
    for(int i = 0; i < size; i++)
    {
        if(x[i]>x[i+1])
        {
            std::swap(x[i],x[i+1]);            
        }
    }
}


int main()
{
    int arr[5];
    for(int i=0; i<5; i++)
    {
        std::cout << "please enter element " << i << ": " << std::endl;
        std::cin  >> arr[i];
    }

    sort(arr,sizeof(arr)/sizeof(arr[0]));

    std::cout << "\nelements after sorting:" << std::endl;
    for(int i = 0; i< 5; i++)
    {
        std::cout << arr[i] << std::endl;
    }

    return 0;
}