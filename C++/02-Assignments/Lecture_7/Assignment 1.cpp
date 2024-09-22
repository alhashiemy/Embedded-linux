#include <iostream>
#include <vector>

class Shape {
public:
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double getArea() const override {
        return 3.14 * radius * radius;
    }

    double getPerimeter() const override {
        return 2 * 3.14 * radius;
    }
};

class Rectangle : public Shape {
private:
    double width, length;

public:
    Rectangle(double w, double l) : width(w), length(l) {}

    double getArea() const override {
        return width * length;
    }

    double getPerimeter() const override {
        return 2 * (width + length);
    }
};

class Triangle : public Shape {
private:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    double getArea() const override {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    double getPerimeter() const override {
        return side1 + side2 + side3;
    }
};

int main() {
    std::vector<Shape*> shapes;

    shapes.push_back(Circle(5));
    shapes.push_back(Rectangle(4, 6));
    shapes.push_back(Triangle(3, 4, 5));

    for (Shape* shape : shapes) {
        std::cout << "Area: " << shape->getArea() << ", Perimeter: " << shape->getPerimeter() << std::endl;
    }
    // Clean up memory
    for (Shape* shape : shapes) {
        delete shape;
    }

    return 0;
}