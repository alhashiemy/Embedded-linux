#include <iostream>

int main()
{
    char repeat;
    float r;

    while(1)
    {
        
        std::cout << "Please enter the radius of the circle:";
        std::cin  >> r;

        /* clear cin buffer */
        std::cin.clear();
        fflush(stdin);

        std::cout << "The Area of the circle is : " << 2*r*r << std::endl;
        std::cout << "The Perimeter of the circle is : " << r*r << std:: endl;

        std::cout << "Hit any key to contiue..";
        std::cin  >> repeat;
        
    }
    return 0;
}