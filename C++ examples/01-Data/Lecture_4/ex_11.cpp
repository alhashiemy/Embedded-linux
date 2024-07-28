#include <iostream>
#include <cstring>

int main()
{
    char str[100];
    std::cin.getline(str,sizeof(str));
    getline(cin,str);
    
    int i = 0;
    while(str[i] != '\0')
    {
        if(islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
        i++;
    }
    std::cout << str << std::endl;
    return 0;
}