#include <iostream>
#include <memory>

class Dog;
class Person
{
    private:
        std::string name;
        std::shared_ptr<Dog> dog;
    public:
        Person(std::string cp_name):name(cp_name){}
        void setDog(std::shared_ptr<Dog> cp_dog)
        {
            dog = cp_dog;
        }
        void Display();
        ~Person()
        {
            std::cout << "Person has gone" << std::endl;
        }
};
class Dog
{
    private:
        std::string name;
        std::weak_ptr<Person> person;
    public:
        Dog(std::string cp_name):name(cp_name){}
        std::string getName(){return name;}
        void setPerson(std::shared_ptr<Person> cp_person)
        {
            person = cp_person;
        }
        ~Dog()
        {
            std::cout << "Dog has gone" << std::endl;
        }
};
void Person::Display()
{
    if(dog)
    {
        std::cout << "Person "<<name<<" has dog named "<<dog->getName()<<std::endl;
    }
    else
    {
        std::cout<<"Person "<<name<<" has no dog"<<std::endl;
    }
}
int main()
{
    std::shared_ptr<Person> person_ptr = std::make_shared<Person>("Essam");
    std::shared_ptr<Dog>    dog_ptr    = std::make_shared<Dog>("Jax");

    // person_ptr->setDog(dog_ptr);
    dog_ptr->setPerson(person_ptr);

    person_ptr->Display();
    return 0;
}