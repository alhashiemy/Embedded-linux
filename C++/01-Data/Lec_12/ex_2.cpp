#include <iostream>
#include <memory>


class Person
{
    private:
        std::string name;
        int age;
    public:
        Person(std::string cp_name,int cp_age)
        {
            name = cp_name;
            age = cp_age;
        }
        void Display()
        {
            std::cout << "Name => "<<name<<"   Age => "<<age<<std::endl;
        }
        ~Person()
        {
            std::cout << "PERSON HAS GONE" << std::endl;
        }
};
int main()
{
    std::shared_ptr<Person> sptr1 = std::make_shared<Person>("Ahmed",26);
    sptr1->Display();
    {
       std::shared_ptr<Person> sptr2 = sptr1;
       sptr2->Display();
       std::cout << "Number of shared pointers => "<< sptr2.use_count() << std::endl;
    }
    std::shared_ptr<Person> sptr3 = sptr1;
    sptr1.reset(new Person("Sara",20));
    std::cout << "Number of shared pointers => "<< sptr1.use_count() << std::endl;
    std::cout << " is unique => "<<sptr1.unique() << std::endl;
    // std::unique_ptr<Person> uptr = std::make_unique<Person>(sptr1.get());
    return 0;
}