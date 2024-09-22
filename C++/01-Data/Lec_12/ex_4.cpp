#include <iostream>
#include <memory>

class Daughter;
class Son;
class Mother
{
    private:
        std::weak_ptr<Son> son;
        std::weak_ptr<Daughter> daughter;
    public:
        void setDaughter(std::shared_ptr<Daughter> cp_daughter)
        {
            daughter = cp_daughter;
        }
        void setSon(std::shared_ptr<Son> cp_son)
        {
            son = cp_son;
        }
        ~Mother()
        {
            std::cout << "Mother has gone" << std::endl;
        }
};
class Son
{
    private:
        std::shared_ptr<Mother> mother;
    public:
        Son(std::shared_ptr<Mother> cp_mother):mother(cp_mother){}
        ~Son()
        {
            std::cout << "Son has gone" << std::endl;
        }
};
class Daughter
{
    private:
        std::shared_ptr<Mother> mother;
    public:
        Daughter(std::shared_ptr<Mother> cp_mother):mother(cp_mother){}
        ~Daughter()
        {
            std::cout << "Daughter has gone" << std::endl;
        }
};

int main()
{
    std::shared_ptr<Mother>   mother_ptr   = std::make_shared<Mother>();
    std::shared_ptr<Son>      son_ptr      = std::make_shared<Son>(mother_ptr);
    std::shared_ptr<Daughter> daughter_ptr = std::make_shared<Daughter>(mother_ptr);

    mother_ptr->setDaughter(daughter_ptr);
    mother_ptr->setSon(son_ptr);
    return 0;
}