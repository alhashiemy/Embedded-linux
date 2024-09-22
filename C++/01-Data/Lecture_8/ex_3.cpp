#include <iostream>

class Person
{
    private:
        std::string name;
        std::string gender;
        int age;
        double height;
    public:
        // Person()
        // {
        //     std::cout << "Hello from default constructor...."<<std::endl;
        //     name = "null";
        //     gender = "null";
        //     age = 0;
        //     height = 0;
        // }
        // Person(std::string cp_name)
        // {
        //     std::cout << "Hello from parameterized constructor 1 ...."<<std::endl;
        //     name = cp_name;
        //     gender = "null";
        //     age = 0;
        //     height = 0;
        // }
        // Person(std::string cp_name,std::string cp_gender)
        // {
        //     std::cout << "Hello from parameterized constructor 2 ...."<<std::endl;
        //     name = cp_name;
        //     gender = cp_gender;
        //     age = 0;
        //     height = 0;
        // }
        Person(std::string cp_name = "null",std::string cp_gender = "null" ,int cp_age = 0,double cp_height = 0)
        {
            std::cout << "Hello from parameterized constructor 3 ...."<<std::endl;
            name = cp_name;
            gender = cp_gender;
            age = cp_age;
            height = cp_height;
        }
        void Display()
        {
            std::cout << "Name => "<<name<<std::endl;
            std::cout << "Gender => "<<gender<<std::endl;
            std::cout << "Age => "<<age<<std::endl;
            std::cout << "Height => "<<height<<std::endl;
        }
        ~Person()
        {
            std::cout << "Hello from destructor...." << std::endl;
        }
};
int main()
{
    // Person person_1;
    // person_1.Display();

    // Person person_2("Mohamed");
    // person_2.Display();

    // Person person_3("Mohamed","male");
    // person_3.Display();

    // Person person_4("Mohamed","male",26,180);

    // person_4.Display();

    Person *ptr = new Person("Ahmed","Male",26,180);

    ptr->Display();

    delete ptr;
    return 0;
}