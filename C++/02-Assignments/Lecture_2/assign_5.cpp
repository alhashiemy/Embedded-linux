#include <iostream>

int main() {

    int num[10];

    for(;;)
    {
        for(int i=0; i<10; i++) {

            std::cout << "Please enter number " << i << " : " ;
            std::cin  >> num[i];
        }

        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9-i; j++)
            {
                if(num[j]> num[j+1])
                {
                    num[j]   = num[j] + num[j+1];
                    num[j+1] = num[j] - num[j+1];
                    num[j]   = num[j] - num[j+1];
                }
            }
        }
        for(int i=0; i<10; i++){

            std::cout << num[i] << '\n';
        }

        std::cout << "Hit any key to continue..";
        std::cin  >> num[0];
    }
    return 0;
}