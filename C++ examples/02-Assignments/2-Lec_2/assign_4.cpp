#include <iostream>
#include <string>

int main() {
    
    std::string sen, new_sen;
    
    
    for(;;)
    {
        sen.clear();
        new_sen.clear();
        std::cout << "Enter a sentence: ";
        getline(std::cin, sen);

        while(sen.find(' ') != std::string::npos)
        {
            new_sen.insert(new_sen.size(), &sen[sen.find_last_of(' ')+1]);
            new_sen.insert(new_sen.size(), " ");
            sen.erase(sen.find_last_of(' '));
        }

        new_sen.insert(new_sen.size(), sen);

        std::cout << new_sen << std::endl;
        
        std::cout << "Hit any key to continue..";
        std::cin  >> sen;
        
        std::cin.clear();
        fflush(stdin);

    }



    return 0;
}