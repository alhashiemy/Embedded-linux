#include <iostream>


int main()
{
    // for(int aa : {1,3,4,5,8,6})
    // {
    //     std::cout<<aa<<std::endl;
    // }
    int i = 0;
    while(i < 5)
    {
        if(i == 3)
        {
            i++;
            continue;
        }
        std::cout<<"i => "<<i<<std::endl;
        i++;
    }
    return 0;
}