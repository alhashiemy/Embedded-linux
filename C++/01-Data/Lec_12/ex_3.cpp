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
    std::shared_ptr<Person> sptr1 = std::make_shared<Person>("Ahmed",20);
    std::shared_ptr<Person> sptr2 = sptr1;

    std::weak_ptr<Person> wptr = sptr1;

    std::cout << "Number of shared pointers => "<<sptr1.use_count()<<std::endl;
    if(std::shared_ptr<Person> sptr3 = wptr.lock())
    {
        sptr3->Display();
    }
    else
    {
        std::cout << "shared pointer is expired" << std::endl;
    }
}