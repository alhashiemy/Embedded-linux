#include <iostream>

class Dim
{
    private:
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
            std::cout << "Y => "<<y<<std::endl;
            std::cout << "Z => "<<z<<std::endl;
        }
};

int main()
{
    Dim obj;
    obj.setX(10);
    obj.setY(20);
    obj.setZ(30);

    obj.Display();
    return 0;
}