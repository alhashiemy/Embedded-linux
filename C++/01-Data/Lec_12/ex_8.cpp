#include <iostream>

template<typename T,typename S = std::string>
class Data
{
    private:
        T data_1;
        S data_2;
    public:
        Data(T value_1,S value_2);
        void Display();
};
template<typename T,typename S>
Data<T,S>::Data(T value_1,S value_2)
{
    data_1 = value_1;
    data_2 = value_2;
}
template<typename T,typename S>
void Data<T,S>::Display()
{
    std::cout << "Data_1 => "<<data_1<<std::endl;
    std::cout << "Data_2 => "<<data_2<<std::endl;
}
int main()
{
    Data<int> obj1(20,"Ahmed");
    obj1.Display();
    return 0;
}