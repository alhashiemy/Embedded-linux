#include <iostream>

// int main()
// {
//     int *ptr = new int[5];

//     for (int i = 0; i < 5; i++)
//     {
//         std::cout << "Enter element_"<<i+1<<" => ";
//         std::cin >> ptr[i];
//     }
//     for (int i = 4; i >= 0; i--)
//     {
//         std::cout << ptr[i] << " ";
//     }
//     std::cout <<"\n";

//     delete[] ptr;
//     return 0;
// }

int* func()
{
    // int arr[3] = {1,2,3};
    int *arr = new int[3]{1,2,3};
    return arr;
}

int main()
{
    int *ptr = func(); 
    for (int i = 0; i < 3; i++)
    {
        std::cout << ptr[i] << std::endl;
    }
    delete[] ptr;



    ptr = new int[2]{100,200};
    delete[] ptr;
    return 0;
}