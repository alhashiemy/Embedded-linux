#include <iostream>

int main()
{
    char str[] = "Mohhhhaaaanadd";
    std::string s;
    int i = 0,j;
    while(str[i] != '\0')
    {
        j = i + 1;
        while(str[j] != '\0')
        {
            if(s.find(str[i]) == std::string::npos)
            {
                if(str[i] == str[j])
                {
                    s += str[i];
                    std::cout << str[i] << " is repeated..."<<std::endl;
                }
            }

            j++;
        }
        i++;
    }
    return 0;
}