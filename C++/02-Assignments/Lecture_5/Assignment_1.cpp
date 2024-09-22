#include <iostream>

class Date
{
    private:
        int day;
        int month;
        int year;

    public:
        Date():day(1),month(1),year(2000){}

        void setDay(int cp_day)
        {
            if((cp_day>0) && (cp_day<=31))
            {
                day = cp_day;
            }
            else
            {
                std::cout << "out of day range." << std::endl;
            }
        }

        void setMonth(int cp_month)
        {
            if((cp_month>0) && (cp_month<=12))
            {
                month = cp_month;
            }
            else
            {
                std::cout << "out of month range." << std::endl;
            }
        }

        void setYear(int cp_year)
        {
            year = cp_year;
        }

        int getDay()  {return day;}
        int getMonth(){return month;}
        int getYear() {return year;}

        void Display()
        {
            std::cout << getDay() << "/" << getMonth() << "/" << getYear() << std::endl;
        }    

};

int main()
{
    Date date;
    int day, month, year;
    
    std::cout << "Input day: ";
    std::cin  >> day;
    std::cout << "Input month: ";
    std::cin  >> month;
    std::cout << "Input year: ";
    std::cin  >> year;
    if(day == date.getDay() && month == date.getMonth() && year == date.getYear())
    {
        std::cout << "The date is valid." << std::endl;
    }
    else
    {
        std::cout << "The data isn't valid. " << std::endl;
    }
    

    return 0;
}