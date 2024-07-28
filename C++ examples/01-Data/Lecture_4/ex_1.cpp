#include <iostream>
#include <cctype>

int main()
{
    char cha = 'A';
    while(cha >= 'A' && cha <= 'z')
    {
        if(isalpha(cha))
        {
            std::cout << cha << " ";
        }
        cha++;
    }
    std::cout<<"\n";
    return 0;
}