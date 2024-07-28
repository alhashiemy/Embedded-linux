#include <iostream>

enum state
{
    failed,
    pass,
    good,
    very_good,
    exec
};
void SetState(state obj)
{
    switch(obj)
    {
        case state::failed:
        {
            std::cout << "failed" << std::endl;
            break;
        }
        case state::pass:
        {
            std::cout << "pass" << std::endl;
            break;
        }
        case state::good:
        {
            std::cout << "good" << std::endl;
            break;
        }
        case state::very_good:
        {
            std::cout << "very_good" << std::endl;
            break;
        }
        case state::exec:
        {
            std::cout << "exec" << std::endl;
            break;
        }
    }
}
int main()
{
    int grade;
    std::cout << "Enter your grade => ";
    std::cin >> grade;

    if((grade < 50))
    {
        SetState(state::failed);
    }
    else if((grade < 65))
    {
        SetState(state::pass);
    }
    else if((grade < 75))
    {
        SetState(state::pass);
    }
    else if((grade < 85))
    {
        SetState(state::pass);
    }
    else
    {
        std::cout<<"Invalid input ...."<<std::endl;
    }
    return 0;
}