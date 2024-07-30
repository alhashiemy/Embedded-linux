#include <iostream>
#include <string>

int main()
{
    std::string str = "Moh%an%ad";
    int i = 0;
    while(str[i] != '\0')
    {
        if(!isalpha(str[i]))
        {
            str.erase(i,1);
        }
        else
        {
            i++;
        }
        // i++;
    }
    std::cout << str << std::endl;
    return 0;
}