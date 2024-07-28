#include <iostream>

int main()
{
    int n1,n2,n3,n4,n5;
    int sum;
    double avg;

    std::cout<<"Enter 5 integers"<<std::endl;
    std::cin>>n1>>n2>>n3>>n4>>n5;

    sum = n1 + n2 + n3 + n4 + n5; 
    avg = static_cast<double>(sum/5.0);

    std::cout<<"the Averge => "<<avg<<std::endl;
    return 0;
}