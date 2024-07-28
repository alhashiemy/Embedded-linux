#include <iostream>
#include <algorithm>
int main()
{
    // int arr[10],sum=0;
    // for (int i = 0; i < 10; i++)
    // {
    //     std::cout << "Enter element => ";
    //     std:: cin >> arr[i];
    //     sum = sum + arr[i];
    // }
    // std::cout<<"Summation => "<<sum<<std::endl;

    int arr1[3] = {1,2,3};
    int arr2[3];

    std::copy(arr1,arr1 + 3,arr2);
    for (int i = 0; i < 3; i++)
    {
        std::cout<<arr2[i]<<std::endl;
    }
    
    return 0;
}