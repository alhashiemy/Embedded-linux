#include <iostream>

class Shape
{
    public:
        virtual double getArea()
        {
            return{};
        }
        virtual ~Shape() = default;
};
class Rectangle : public Shape
{
    private:
        double width;
        double height;
    public:
        Rectangle(double cp_width,double cp_height):width(cp_width),height(cp_height){}
        double getArea()
        {
            return width*height;
        }
        virtual ~Rectangle() = default;
};

class Circle : public Shape
{
    private:
        double radius;

    public:
        Circle(double cp_radius):radius(cp_radius){}
        double getArea()
        {
            return static_cast<double>(3.14*radius*radius);
        }
        virtual ~Circle() = default;
};

double TotalArea = 0;

void getTotalArea(Shape* ptr)
{
    TotalArea += ptr->getArea();
}

int main()
{
    Circle shape1(10);
    Circle shape2(20);
    Circle shape3(30);

    Rectangle shape4(20,50);
    Rectangle shape5(10,50);
    Rectangle shape6(200,30);

    getTotalArea(&shape1);
    getTotalArea(&shape2);
    getTotalArea(&shape3);
    getTotalArea(&shape4);
    getTotalArea(&shape5);
    getTotalArea(&shape6);

    std::cout << "Total Area => "<<TotalArea<<std::endl;
    return 0;
}