#include <iostream>
#include <vector>

template<typename T>
class MyContainer {
protected:
    std::vector<T> elements;

public:
    void addElement(const T& element) {
        elements.push_back(element);
    }

    void display() {
        for (const T& element : elements) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
};

template<typename T>
class DerivedContainer : public MyContainer<T> {
public:
    void display() {
        std::cout << "Specialized display for DerivedContainer: ";
        for (const T& element : this->elements) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    MyContainer<int> container1;
    container1.addElement(10);
    container1.addElement(20);
    container1.addElement(30);
    container1.display();

    DerivedContainer<std::string> container2;
    container2.addElement("Hello");
    container2.addElement("World");
    container2.display();

    return 0;
}