#include <iostream>

int main()
{
    // char str[20] = "Ahmed";
    // std::cout<< str <<std::endl;
    char str[][20] = {
        "mohamed",
        "Ahmed",
        "essam"
    };
    for (int i = 0; i < 3; i++)
    {
        std::cout << str[i] << std::endl;
    }
    
    return 0;
}