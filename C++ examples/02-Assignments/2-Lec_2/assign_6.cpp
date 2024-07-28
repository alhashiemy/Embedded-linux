#include <iostream>
#include <string>

void capitalizeFirstChar(std::string str) 
{
    for (int i = 0; str[i] != '\0'; i++) {

        if (i == 0) {

            str[i] = toupper(str[i]);
        }
        else if ((str[i-1] == ' ') && (isalpha(str[i]))) {

            str[i] = toupper(str[i]);
        }
        else {
            str[i] = tolower(str[i]);
        }
    }

    std::cout << "Capitalized string: " << str << std::endl;

}

int main() {

    std::string str;
    for(;;)
    {
        str.clear();
        std::cout << "Enter a string: ";
        getline(std::cin, str);
        capitalizeFirstChar(str);

        std::cout << "Hit any key to continue..";
        std::cin  >> str;

        std::cin.clear();
        fflush(stdin);
    }
    return 0;
}