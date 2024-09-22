#include <iostream>

class ModifiyClass;
class Data
{
private:
    int data;

public:
    Data(int value) : data(value) {}
    void Display()
    {
        std::cout << "Data => " << data << std::endl;
    }
    friend class ModifiyClass;
};
class ModifiyClass
{
private:
    Data *o;

public:
    ModifiyClass(Data *oo) : o(oo) {}
    void Modifiy(int value)
    {
        o->data = value;
    }
};
int main()
{
    Data obj(10);

    ModifiyClass mod(&obj);
    mod.Modifiy(100);
    obj.Display();

    mod.Modifiy(1000);
    obj.Display();
    return 0;
}