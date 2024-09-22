#include <iostream>
#include <sstream>

int main()
{
    // std::string sen;
    // std::cout << "Enter sentence => ";
    // getline(std::cin,sen);

    std::stringstream ss;

    ss << "Hello" << "12.5" <<" "; 

    double num;
    std::string str;

    ss >> str >> num;

    std::cout << "str => "<<str<<std::endl;   
    std::cout << "num => "<<num<<std::endl;   
    return 0;
}