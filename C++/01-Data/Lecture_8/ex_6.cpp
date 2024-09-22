#include <iostream>

class Data
{
    private:
        int *ptr;
    public:
        Data():ptr(nullptr){
            std::cout << "Hello from default constructor...."<<std::endl;
        }
        Data(int value)
        {
            std::cout << "Hello from parameterized constructor...."<<std::endl;
            ptr = new int;
            *ptr = value;
        }
        // Data(const Data &obj)
        // {
        //     std::cout << "Hello from copy constructor...."<<std::endl;
        //     ptr = obj.ptr;
        // }
        Data(const Data &obj)
        {
            std::cout << "Hello from deep copy constructor...."<<std::endl;
            ptr = new int;
            *ptr = *obj.ptr;
        }
        Data(Data&& obj)
        {
            std::cout << "Hello from move copy constructor....." <<std::endl;
            ptr = obj.ptr;
            obj.ptr = nullptr;
        }
        void Display()
        {
            if(ptr != nullptr)
            {
                std::cout << "Data => "<<*ptr<<std::endl;
            }
            else
            {
                std::cout << "ptr is null pointer....."<<std::endl;
            }
        }
        ~Data()
        {
            std::cout << "Hello from destructor..."<<std::endl;
            if(ptr != nullptr)
            {
                delete ptr;
            }
        }
};
int main()
{
    Data data_1 = std::move(Data(10));
    data_1.Display();

    {
        Data data_2 = std::move(data_1);
        data_2.Display();
    }

    data_1.Display();
    return 0;
}