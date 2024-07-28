#include <iostream>

int main()
{
    char str[] = "My    name   is   ahmed";
    int i = 0;
    while(str[i] != '\0')
    {
        if(!isalpha(str[i]) && isalpha(str[i+1]))
        {
            std::cout<<"\n";
        }
        else
        {
            std::cout<<str[i];
        }
        i++;
    }
    return 0;
}