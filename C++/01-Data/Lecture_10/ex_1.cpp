#include <iostream>

class Parent
{
    public:
        virtual void Display()
        {
            std::cout << "Hello from parent display function" << std::endl;
        }
};
class Child : public Parent
{
    public:
        virtual void Display()
        {
            std::cout << "Hello from Child display function" << std::endl;
        }
};
void print(Parent* ptr)
{
    ptr->Display();
}
int main()
{
    Parent parent;
    Child child;

    print(&parent);
    print(&child);
    return 0;
}