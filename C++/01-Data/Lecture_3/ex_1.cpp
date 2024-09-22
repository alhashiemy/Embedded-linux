#include <iostream>

void func(int ptr[])
{
    ptr++;
    int size = sizeof(ptr) / sizeof(ptr[0]);
    std::cout << "size => "<<size<<std::endl;
}
int main()
{
    int arr[] = {1,2,3,4,5,5,4,7,8,10,2,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    std::cout << "size => "<<size<<std::endl;
    
    func(arr);
    return 0;
}