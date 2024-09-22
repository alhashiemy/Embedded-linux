#include <iostream>
#include <string>

class Shape {
    protected:
        std::string name;
    public:
        Shape(std::string cp_name = "nall"):name(cp_name){}
        std::string getName() { return name; }
        virtual double calculateArea() = 0;
};

class Rectangle : public Shape {
    private:
        double length, width;
    public:
        Rectangle(double l, double w):Shape("Rectangle"), length(l), width(w) {}
        double calculateArea() override {
            return length * width;
        }
};

class Circle : public Shape {
    private:
        double radius;
    public:
        Circle(double r):Shape("Circle"), radius(r) {}
        double calculateArea() override {
            return 3.14159 * radius * radius;
        }
};

class Triangle : public Shape {
    private:
        double base, height;
    public:
        Triangle(double b, double h):Shape("Triangle"), base(b), height(h) {}
        double calculateArea() override {
            return 0.5 * base * height;
        }
};

class ThreeDimensionalShape:public Shape {
    public:
        ThreeDimensionalShape(std::string cp_name):Shape(cp_name){}
        virtual double calculateVolume() = 0;
};

class Sphere : public ThreeDimensionalShape {
    private:
        double radius;
    public:
        Sphere(double r) : ThreeDimensionalShape("Sphere"), radius(r) {}
        double calculateArea() override {
            return 4 * 3.14159 * radius * radius;
        }
        double calculateVolume() override {
            return (4.0 / 3.0) * 3.14159 * radius * radius * radius;
        }
};

int main() {
    Shape* rectangle = new Rectangle(5, 4);
    Shape* circle    = new Circle(3);
    Shape* triangle  = new Triangle(6, 8);
    ThreeDimensionalShape* sphere = new Sphere(2);

    std::cout << "Name: " << rectangle->getName() << ", Area: " << rectangle->calculateArea() << std::endl;
    std::cout << "Name: " << circle->getName() << ", Area: " << circle->calculateArea() << std::endl;
    std::cout << "Name: " << triangle->getName() << ", Area: " << triangle->calculateArea() << std::endl;
    std::cout << "Name: " << sphere->getName() << ", Area: " << sphere->calculateArea() << ", Volume: " << sphere->calculateVolume() << std::endl;

    delete rectangle;
    delete circle;
    delete triangle;
    delete sphere;

    return 0;
}