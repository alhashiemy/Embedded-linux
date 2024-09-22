#include <iostream>

// void Add(int &&x,int &&y)
// {
//     x = 100;
//     y = 200;
//     std::cout << x + y << std::endl;
// }
int main()
{
    // int x = 10;

    // int &&ref = 50;

    // ref = 20;

    // std::cout << "x => "<<x<<std::endl;
    // Add(10,20);

    int x = 10;

    int &ref1 = x;

    int &ref2 = x;

    std::cout << ref1 << "  " << ref2 << std::endl;
    return 0;
}