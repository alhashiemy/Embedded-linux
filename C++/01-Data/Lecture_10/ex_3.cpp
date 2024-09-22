#include <iostream>

class GameCharacter
{
    public:
        virtual void attack()
        {
            std::cout << "Character attacks"<<std::endl;
        }
        virtual ~GameCharacter() = default;
};
class Warrior : public GameCharacter
{
    public:
        void attack()override
        {
            std::cout << "Warrior swings sword"<<std::endl;
        }
        virtual ~Warrior() = default;
};
class Archer : public GameCharacter
{
    public:
        void attack()override
        {
            std::cout << "Archer shoots arrows"<<std::endl;
        }
        virtual ~Archer() = default;
};
class Mage : public GameCharacter
{
    public:
        void attack()override
        {
            std::cout << "Mage casts spells"<<std::endl;
        }
        virtual ~Mage() = default;
};
int main()
{
    GameCharacter* ptr1 = new Warrior();
    GameCharacter* ptr2 = new Mage();
    GameCharacter* ptr3 = new Archer();

    ptr1->attack();
    ptr2->attack();
    ptr3->attack();

    delete ptr3;
    delete ptr2;
    delete ptr1;
    return 0;
}