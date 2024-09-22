#include <iostream>

int main()
{
    char str[] = "Mohhhnhaaaanadd";
    std::string s;
    int i = 0,j;
    while(str[i] != '\0')
    {
        j = i + 1;
        while(str[j] != '\0')
        {
            while(str[i] == str[j])
            {
                for (int k = j; str[k] != '\0'; k++)
                {
                    str[k] = str[k+1];
                }
                
            }
            j++;
        }
        i++;
    }
    std::cout<<str<<std::endl;
    return 0;
}