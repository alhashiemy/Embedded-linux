#include <iostream>
#include <string>

int main() 
{
    std::string str;
    std::cout << "Please enter your name:";
    getline(std::cin,str);

    for(int i = 0; str[i] != '\0';)
    {
        if((isalpha(str[i])) || (str[i] == ' '))
        {
            i++;
        }
        else
        {
            str.erase(i,1);
        }
    }
    std::cout << str;
    return 0;
}