#include <iostream>
#include <string>

class Student
{
    private:
        std::string Name;
        char Class;
        int RollNumber;
        unsigned int Marks;

    public:
        Student(std::string cp_Name = "nall", char cp_Class = '\0', int cp_RollNumber = 0, unsigned int cp_Marks = 0):
        Name(cp_Name),Class(cp_Class),RollNumber(cp_RollNumber) 
        {

            if(cp_Marks <= 100)
                Marks = cp_Marks;
            else
                std::cout << "out of marks range." << std::endl;
        }

        void setName(std::string cp_Name)
        {
            Name = cp_Name;
        }

        void setClass(char cp_Class)
        {
            Class = cp_Class;
        }

        void setRollNumber(int cp_RollNumber)
        {
            RollNumber = cp_RollNumber;
        }

        void setMarks(unsigned int cp_Marks)
        {
            if(cp_Marks <= 100)
                Marks = cp_Marks;
            else
                std::cout << "out of marks range." << std::endl;
        }

        std::string getName(){return Name;}
        char getClass(){return Class;}
        int getRollNumber() {return RollNumber;}
        int getMarks(){return Marks;}

        void Display()
        {
            std::cout << "/------------------------------------/\n" <<
                         "Student details:\n" <<
                         "Name: " << getName() << "\n"
                         "Class: "<< getClass()<< "\n"
                         "Roll number" << getRollNumber() << "\n"
                         "Marks(0 - 100): " << getMarks() << "\n"
                         "/------------------------------------/\n" ;
        }
        std::string getGrade()
        {
            if(Marks<50)
            {
                return "falied";
            }
            else if(Marks<65)
            {
                return "pass";
            }
            else if(Marks<75)
            {
                return "good";
            }
            else if(Marks<85)
            {
                return "very good";
            }
            else if(Marks<=100)
            {
                return "excellent";
            }

        }

};

int main()
{
    Student student("mohammed ali",'a',3,99);
    student.Display();

    std::cout << student.getGrade() ;


    return 0;
}