#include <iostream>

int main()
{
    int repeat, max, num[5];

    for(;;)
    {
        max = 0;
        std::cout << "Please enter 5 numbers, each separated by white space: ";

        for(int i=0; i<5; i++)
        {
            std::cin  >> num[i];
            
            if(num[i] > max)
            {
                max = num[i];
            }

        }
        std::cin.clear();
        fflush(stdin);
        std::cout << "The maximum number in the entered numbers is " << max << std::endl;
        
        std::cout << "Hit any key to continue..";
        std::cin  >> repeat;
        std::cin.clear();
        fflush(stdin);
    }



    return 0;
}