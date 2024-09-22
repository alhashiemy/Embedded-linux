#include <iostream>
#include <string>


int main() 
{
    std::string NUM;
    std::cout << "Please Enter No. :";
    std::cin  >> NUM;
    for(int i = NUM.length()-3; i > 0; i -=3)
    {
        NUM.insert(i , ",");
    }

    std::cout << NUM;

    return 0;
}