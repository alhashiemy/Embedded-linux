#include <iostream>

class Counter
{
    private:
        int count;
        int step;

    public:
        Counter(int step = 1):count(0)
        {
            this->step = step;
        }
        Counter& Increment()
        {
            count+=step;
            return *this;
        }
        Counter& Decrement()
        {
            count-=step;
            return *this;
        }
        void Display()const
        {
            std::cout << "Counter => "<<count<<std::endl;
        }
};
int main()
{
    // Counter obj(10);
    // obj.Increment().Increment().Increment().Increment().Decrement();

    // obj.Display();

    // const Counter obj(10);
    // std::cout << obj.count << std::endl;

    // const Counter obj(10);
    // obj.Display();

    Counter obj(10);
    obj.Increment().Increment();
    obj.Display();
    return 0;
}