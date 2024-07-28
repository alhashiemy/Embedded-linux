#include <iostream>

int main()
{
    int n1,n2,n3,n4,n5;
    std::cout << "Enter five numbers" <<std::endl;
    std::cin >> n1 >> n2 >> n3 >> n4 >> n5;
    int sum = n1 + n2 + n3 + n4 + n5;
    double avg = (double)(sum/5.0);
    std::cout<<"Avg => "<<avg<<std::endl;
    return 0;
}