#include <iostream>
#include <string>

int main()
{
    std::string str;

    for(;;)
    {
        str.clear();
        std::cout << "Enter a string: ";
        std::cin  >> str;

        for(int i = 0; str[i] != '\0'; i++)
        {
            if(islower(str[i-1]) && isupper(str[i]))
            {
                str.insert(i, " ");
            }

        }
        std::cout << str <<  std::endl;

        std::cout << "Hit any key to continue..";
        std::cin  >> str;
    }

    return 0;
}