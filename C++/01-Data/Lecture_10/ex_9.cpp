#include <iostream>
#include <memory>

class Rectangle
{
private:
    double width;
    double height;

public:
    Rectangle(double cp_width, double cp_height) : width(cp_width), height(cp_height) {}
    void getArea()
    {
        std::cout << "Area => " << (width * height) << std::endl;
    }
    ~Rectangle()
    {
        std::cout << "Hello from destructor"<<std::endl;
    }
};

int main()
{
    std::unique_ptr<Rectangle> uptr1 = std::make_unique<Rectangle>(10,20);
    uptr1->getArea();

    std::unique_ptr<Rectangle> uptr2;
    uptr2 = std::move(uptr1);
    uptr2->getArea();
    return 0;
}