#include <iostream>
#include <memory>

class Person {
private:
    std::string name;
    int age;

public:
    Person(const std::string& nm, int ag) : name(nm), age(ag) {}

    void introduce() {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    std::unique_ptr<Person> personUnique(new Person("Alice", 30));
    std::shared_ptr<Person> personShared = std::make_shared<Person>("Bob", 25);
    
    personShared->introduce();
    personUnique->introduce();

    std::weak_ptr<Person> personWeak = personShared;
    
    return 0;
}.