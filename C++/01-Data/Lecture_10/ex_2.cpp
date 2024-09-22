#include <iostream>

class Employee
{
    public:
        virtual void work()
        {
            std::cout << "Employee works"<<std::endl;
        }
};
class Developer : public Employee
{
    public:
        virtual void work()
        {
            std::cout << "Developer writes code"<<std::endl;
        }
};
class Manager : public Employee
{
    public:
        virtual void work()
        {
            std::cout << "Manager manages team"<<std::endl;
        }
};
int main()
{
    Employee* ptr1 = new Employee();
    Employee* ptr2 = new Developer();
    Employee* ptr3 = new Manager();

    ptr1->work();
    ptr2->work();
    ptr3->work();

    delete ptr3;
    delete ptr2;
    delete ptr1;
    return 0;
}