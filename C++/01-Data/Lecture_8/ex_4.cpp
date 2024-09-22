#include <iostream>
#include <vector>

class Employee
{
    private:
        std::string name;
        int age;
        double salary;
    public:
        void setName(std::string cp_name)
        {
            name = cp_name;
        }
        void setAge(int cp_age)
        {
            age = cp_age;
        }
        void setSalary(double cp_salary)
        {
            salary = cp_salary;
        }
        std::string getName(){return name;}
        int getAge(){return age;}
        double getSalary(){return salary;}

        void Display()
        {
            std::cout <<  "-----------------------------\n";
            std::cout << "Name => "<<getName()<<std::endl;
            std::cout << "Age => "<<getAge()<<std::endl;
            std::cout << "Salary => "<<getSalary()<<std::endl;
            std::cout << "-----------------------------\n";
        }
};

class Company
{
    private:
        std::vector<Employee*> company;
    public:
        void AddEmployee(Employee * employee)
        {
            company.push_back(employee);
        }
        void UpdateEmployee(std::string name,double salary)
        {
            bool flag = false;
            for(Employee* employee : company)
            {
                if(name == employee->getName())
                {
                    employee->setSalary(salary);
                    flag = true;
                    break;
                }
            }
            if(!flag)
            {
                std::cout << "------------------------\n";
                std::cout << "No one with that name >_<......"<<std::endl;
                std::cout << "------------------------\n";
            }
        }
        void RemoveEmployee(std::string name)
        {
            bool flag = false;
            for(int i = 0 ; i<company.size() ; i++)
            {
                if(name == company[i]->getName())
                {
                    company.erase(company.begin() + i);
                    flag = true;
                    break;
                }
            }
            if(!flag)
            {
                std::cout << "------------------------\n";
                std::cout << "No one with that name >_<......"<<std::endl;
                std::cout << "------------------------\n";
            }
        }
        void ShowDataBase()
        {
            for(auto employee : company)
            {
                employee->Display();
            }
        }
        void ShowDataBase(std::string name)
        {
            bool flag = false;
            for(Employee* employee : company)
            {
                if(name == employee->getName())
                {
                    employee->Display();
                    flag = true;
                    break;
                }
            }
            if(!flag)
            {
                std::cout << "------------------------\n";
                std::cout << "No one with that name >_<......"<<std::endl;
                std::cout << "------------------------\n";
            }
        }
};
int main()
{
    std::string name;
    int age;
    double salary;

    std::string choice;
    Company company;

    while(true)
    {
        std::cout << "-----------------------------\n"
                <<"Enter 'add' to add employee\n"
                <<"Enter 'del' to remove employee\n"
                <<"Enter 'update' to update employee\n"
                <<"Enter 'show' to display data base\n"
                <<"Enter 'show_1' to show data of employee\n"
                <<"Enter 'exit' to close application\n"
                <<"==>  ";
        std::cin >> choice;

        if(choice == "add")
        {
            std::cout << "Enter name => ";
            std::cin >> name;
            std::cout << "Enter age => ";
            std::cin >> age;
            std::cout <<"Enter salary =>";
            std::cin >> salary;

            Employee *employee = new Employee();
            employee->setName(name);
            employee->setAge(age);
            employee->setSalary(salary);

            company.AddEmployee(employee);
            delete employee;
        }
        else if(choice == "del")
        {
            std::cout << "Enter name => ";
            std::cin >> name;

            company.RemoveEmployee(name);
        }
        else if(choice == "update")
        {
            std::cout << "Enter name => ";
            std::cin >> name;
            std::cout <<"Enter salary =>";
            std::cin >> salary;

            company.UpdateEmployee(name,salary);
        }
        else if(choice == "show")
        {
            company.ShowDataBase();
        }
        else if(choice == "show_1")
        {
            std::cout << "Enter name => ";
            std::cin >> name;
            company.ShowDataBase(name);
        }
        else if(choice == "exit")
        {
            exit(0);
        }
        else
        {
            std::cout << "Invalid choice T_T try again......"<<std::endl;
        }
    }
    return 0;
}