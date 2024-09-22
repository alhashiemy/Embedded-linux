#include <iostream>

class Animal
{
    public:
        virtual void Speak()
        {
            std::cout << "Animal speaks"<<std::endl;
        }
};
class Cat : public Animal
{
    public:
        // void Speak()override final
        // {
        //     std::cout << "Cat speaks"<<std::endl;
        // }
};
class Dog : public Animal
{
    public:
         void Speak()override
        {
            std::cout << "Dog speaks"<<std::endl;
        }
};
class Bird : public Animal
{
    public:
         void Speak()override
        {
            std::cout << "Bird speaks"<<std::endl;
        }
};
class Child : public Bird
{
    public:
         void Speak()override
        {
            std::cout << "Child speaks"<<std::endl;
        }
};
int main()
{
    Animal* ptr1 = new Cat();
    Animal* ptr2 = new Dog();
    Animal* ptr3 = new Bird();

    ptr1->Speak();
    ptr2->Speak();
    ptr3->Speak();

    delete ptr3;
    delete ptr2;
    delete ptr1;
    return 0;
}