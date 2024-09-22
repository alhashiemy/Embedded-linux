#include <iostream>
#include <string>

class Shape {
    protected:
        std::string color;
    public:
        Shape(std::string cp_color):color(cp_color){}
        virtual double getArea() = 0;
};

class Rectangle : public Shape {
    private:
        double width, height;
    public:
        Rectangle(std::string color, double cp_width = 0, double cp_height = 0):Shape(color), width(cp_width), height(cp_height){}
        double getArea() override {
            return width * height;
        }
};

class Circle : public Shape {
    private:
        double radius;
    public:
        Circle(std::string color, double cp_radius = 0):Shape(color), radius(cp_radius){}
        double getArea() override {
            return 3.14159 * radius * radius;
        }
};

class Triangle : public Shape {
    private:
        double base, height;
    public:
        Triangle(std::string color, double cp_base = 0, double cp_height = 0):Shape(color), base(cp_base), height(cp_height){}
        double getArea() override {
            return 0.5 * base * height;
        }
};

int main() {
    Shape* rectangle = new Rectangle("red",3,4);
    Shape* circle    = new Circle("Yallow",5);
    Shape* triangle  = new Triangle("Green",12,6);

    std::cout << "Rectangle Area => " << rectangle->getArea() << std::endl;
    std::cout << "Circle Area => " << circle->getArea() << std::endl;
    std::cout << "Triangle Area => " << triangle->getArea() << std::endl;

    delete rectangle;
    delete circle;
    delete triangle;
    return 0;
}