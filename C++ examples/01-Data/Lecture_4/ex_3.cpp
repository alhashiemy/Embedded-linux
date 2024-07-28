#include <iostream>

int main()
{
    char str[] = "MOHAMED";
    int i = 0;
    while(str[i] != '\0')
    {
        if(isalpha(str[i]) && isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
        i++;
    }
    std::cout<<str<<std::endl;
    return 0;
}