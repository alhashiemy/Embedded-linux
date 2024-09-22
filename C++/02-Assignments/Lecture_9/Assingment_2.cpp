#include <iostream>
#include <vector>

class Shape {
public:
    virtual double calculateArea() = 0;
    virtual double calculatePerimeter() = 0;
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double calculateArea() override {
        return 3.1415 * radius * radius;
    }

    double calculatePerimeter() override {
        return 2 * 3.14 * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() override {
        return length * width;
    }

    double calculatePerimeter() override {
        return 2 * (length + width);
    }
};

template <typename T>
void calculateTotal(std::vector<T*>& shapes) {
    double totalArea = 0;
    double totalPerimeter = 0;

    for (auto& shape : shapes) {
        totalArea += shape->calculateArea();
        totalPerimeter += shape->calculatePerimeter();
    }

    std::cout << "Total Area: " << totalArea << std::endl;
    std::cout << "Total Perimeter: " << totalPerimeter << std::endl;
}

int main() {
    Circle c1(2);
    Rectangle r1(3, 4);
    Circle c2(3.5);

    std::vector<Shape*> shapes = {&c1, &r1, &c2};

    calculateTotal(shapes);

    return 0;
}