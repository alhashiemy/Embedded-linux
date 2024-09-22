#include <iostream>
#include <string>

int main()
{
    std::string money;
    std::cout << "Enter money => ";
    std::cin >> money;

    for (int i = money.size() - 3; i > 0; i-=3)
    {
        money.insert(i,",");
    }
    std::cout << "Money after => "<<money<<std::endl;
    return 0;
}