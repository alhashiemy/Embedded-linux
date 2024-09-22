#include <iostream>
#include <vector>
#include <string>

class Animal {
public:
    virtual void makeSound() const = 0;
    virtual void displayInfo() const = 0;
};

class Mammal : public Animal {
private:
    std::string species;
public:
    Mammal(const std::string& species) : species(species) {}

    void makeSound() const override {
        std::cout << "Mammal sound: Roar" << std::endl;
    }

    void displayInfo() const override {
        std::cout << "Mammal species: " << species << std::endl;
    }
};

class Bird : public Animal {
private:
    std::string species;
public:
    Bird(const std::string& species) : species(species) {}

    void makeSound() const override {
        std::cout << "Bird sound: Chirp" << std::endl;
    }

    void displayInfo() const override {
        std::cout << "Bird species: " << species << std::endl;
    }
};

class Reptile : public Animal {
private:
    std::string species;
public:
    Reptile(const std::string& species) : species(species) {}

    void makeSound() const override {
        std::cout << "Reptile sound: Hiss" << std::endl;
    }

    void displayInfo() const override {
        std::cout << "Reptile species: " << species << std::endl;
    }
};

int main() {
    std::vector<Animal*> animals;

    animals.push_back(Mammal("Lion"));
    animals.push_back(Bird("Sparrow"));
    animals.push_back(Reptile("Snake"));

    for (auto& animal : animals) {
        animal->displayInfo();
        animal->makeSound();
        std::cout << std::endl;
    }
    
    // Clean up memory
    for (auto& animal : animals) {
        delete animal;
    }
    
    return 0;
}