#include <iostream>

class Rectangle
{
    private:
        double width;
        double height;
    public:
        Rectangle(double cp_width,double cp_height):width(cp_width),height(cp_height){
            std::cout << "Hello from parameterized constructor...."<<std::endl;
        }
        // Rectangle(double cp_width,double cp_height)
        // {
        //     std::cout << "Hello from parameterized constructor...."<<std::endl;
        //     width = cp_width;
        //     height = cp_height;
        // }
        // Rectangle(const Rectangle &obj)
        // {
        //     std::cout << "Hello from copy constructor......"<<std::endl;
        //     width = obj.width;
        //     height = obj.height;
        // }
        void getArea()
        {
            std::cout << "Area => "<<width * height << std::endl;
        }
        ~Rectangle()
        {
            std::cout << "Hello from destructor...."<<std::endl;
        }
};
int main()
{
    Rectangle rec_1(10,20);
    rec_1.getArea();
    Rectangle rec_2 = rec_1;
    rec_2.getArea();
    return 0;
}