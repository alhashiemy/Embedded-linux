#include <iostream>

// int main()
// {
//     int x = 10;

//     int &ref = x;

//     ref = 100;
//     std::cout << "Ref => " << ref << std::endl;
//     std::cout << "x => " << x << std::endl;
//     return 0;
// }

// int main()
// {
//     int x = 20;

//     int &ref;
//     ref = x;

//     std::cout << "Ref => " << ref << std::endl;
//     std::cout << "x => " << x << std::endl;
//     return 0;
// }

// int main()
// {
//     int x = 20;
//     int y = 50;

//     int &ref = x;

//     ref = y;

//     ref = 100;

//     std::cout << "Ref => " << ref << std::endl;
//     std::cout << "x => " << x << std::endl;
//     std::cout << "y => " << y << std::endl;
//     return 0;
// }

// int main()
// {
//     int x = 20;

//     int &ref = x;

//     // int *ptr = &x;
//     int *ptr = &ref;

//     std::cout << "x => " << *ptr << std::endl;
//     return 0;
// }

// int main()
// {
//     int x = 20;

//     int *ptr = &x;

//     // int *&ref = ptr;
//     int &ref = *ptr;

//     ref = 100;
//     std::cout << "x => "<<x<<std::endl;
//     return 0;
// }

// void Modifiy(int &ref)
// {
//     ref *= 100;
// }

// int main()
// {
//     int x = 10;

//     Modifiy(x);

//     std::cout << "x => "<<x<<std::endl;
//     return 0;
// }

// int& Add(int x, int y)
// {
//     int result = x + y;
//     return result;
// }

// int main()
// {
//     int ret = Add(10, 20);

//     std::cout << "Result => " << ret << std::endl;
//     return 0;
// }
