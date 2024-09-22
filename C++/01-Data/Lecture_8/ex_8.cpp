#include <iostream>

class Data
{
    private:
        static int data;
        int x;
    public:
        Data(int value)
        {
            data = value;
        }
        static void setData()
        {
            // std::cout<<x<<std::endl;
            // data = value;
            std::cout << "Hello from set data function...."<<std::endl;
        }
        void Display()
        {
            std::cout << "Data => "<<data<<std::endl;
        }
};
int Data::data = 0;

// void toggle()
// {
//     static bool flag = false;
//     if(flag = false)
//     {
//         flag = true;
//         ////////
//     }else
//     {
//         flag = false;
//         ////////
//     }
// }
int main()
{
    // Data obj1(10);
    // Data obj2(20);

    // obj1.Display();
    // obj2.Display();

    Data::setData();
    return 0;
}