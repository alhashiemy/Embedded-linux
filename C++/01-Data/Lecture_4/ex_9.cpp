#include <iostream>
#include <cstring>

int main()
{
    char first[20];
    char last[20];

    std::cout << "Enter your first name => ";
    std::cin >> first;

    std::cout << "Enter your last name => ";
    std::cin >> last;

    std::cout << "Hello "<<first<<" your first name has "<< strlen(first) <<" characters"<<std::endl;
    std::cout << "And your last name "<<last << " has "<<strlen(last) << " characters"<<std::endl;

    char full[100];
    strcpy(full,first);
    strcat(full," ");
    strcat(full,last);

    std::cout<<"Your full name => "<<full<<std::endl;
    return 0;
}