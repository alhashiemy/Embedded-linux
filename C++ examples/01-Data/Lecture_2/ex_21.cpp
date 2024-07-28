#include <iostream>

int main()
{
    double height,width,area;
    bool choice;
    std::cout << "Welcome to area calculation programme"<<std::endl;
    do{
        std::cout << "Enter height => ";
        std::cin >> height;
        std::cout << "Enter width => ";
        std::cin >> width;

        area = width * height;
        std::cout << "Area => "<<area<<std::endl;

        std::cout << "Do you want to calculate another => ";

    }while((std::cin>>choice)&&(choice == 1));
    return 0;
}