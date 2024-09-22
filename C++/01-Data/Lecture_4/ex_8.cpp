#include <iostream>
#include <cstring>

int main()
{
    // char str[20];
    // strcpy(str,"Ahmed");
    // std::cout << str <<std::endl;

    // char str1[] = "Mohamed";
    // char str2[] = "Mohamed";

    if(!strcmp(str2,str1))
    {
        std::cout<<"strings is the same"<<std::endl;
    }
    else
    {
        std::cout<<"strings is not the same"<<std::endl;
    }
 
    char str[] = "My name is Ahmed";
    if(strstr(str,"Hamada") != nullptr)
    {
        std::cout << " 'is' exsist" << std::endl;
    }

    char str[] = "Mohamed";
    std::cout << strlen(str) <<std::endl;

    char str1[] = "Mohamed";
    char str2[] = "Ahmed";

    strcat(str1," ");
    strcat(str1,str2);

    std::cout << str1 <<std::endl;
    return 0;
}