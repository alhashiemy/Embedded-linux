#include <iostream>

class Dim
{
    private:
        char w;
        char u;
        int x;
        int y;
        int z;
    public:
        void setX(int cp_x)
        {
            x = cp_x;
        }
        void setY(int cp_y)
        {
            y = cp_y;
        }
        void setZ(int cp_z)
        {
            z = cp_z;
        }
        void Display()
        {
            std::cout << "X => "<<x<<std::endl;
            std::cout << "y => "<<y<<std::endl;
            std::cout << "z => "<<z<<std::endl;
        }
};
int main()
{
    // Dim obj;
    // obj.setX(10);
    // Dim obj;
    // obj.x = 100;
    
    // Dim obj;
    // obj.setX(10);
    // obj.setY(20);
    // obj.setZ(30);

    // Dim obj2;
    // obj2.Display();
    // // obj.Display();

    // Dim obj;
    std::cout << sizeof(Dim) << std::endl;
    return 0;
}