#include <iostream>
#include <cstring>
#include <vector>

class MyString;
MyString& operator++(MyString& lhv);
class MyString
{
    private:
        char *str;
    public:
        MyString():str(nullptr){
            std::cout << "Hello from default constructor....."<<std::endl;
        }
        MyString(char *ptr)
        {
            std::cout << "Hello from parameterized constructor...." << std::endl;
            str = new char[strlen(ptr) + 1];
            strcpy(str,ptr);
        }
        MyString(const MyString& obj)
        {
            std::cout << "Hello from deep copy constructor...." << std::endl;
            str = new char[strlen(obj.str) + 1];
            strcpy(str,obj.str);
        }
        MyString(MyString&& obj)
        {
            std::cout << "Hello from move copy constructor...." << std::endl;
            str = obj.str;
            obj.str = nullptr;
        }
        MyString& operator=(const MyString& obj)
        {
            std::cout << "Hello from deep copy assigment operator overloading...." << std::endl;
            if(&obj != this)
            {
                if(str != nullptr)
                delete[] str;
                str = new char[strlen(obj.str) + 1];
                strcpy(str,obj.str);
                return *this;
            }
            else
            {
                return *this;
            }
        } 
        MyString& operator=(MyString&& obj)
        {
            std::cout << "Hello from move copy assigment operator overloading...." << std::endl;
            if(&obj != this)
            {
                if(str != nullptr)
                delete[] str;
                str = obj.str;
                obj.str = nullptr;
                return *this;
            }
            else
            {
                return *this;
            }
        } 
        // MyString& operator++()
        // {
        //     std::cout << "Hello from ++ operator overloading...." << std::endl;
        //     int i = 0;
        //     while(str[i] != '\0')
        //     {
        //         if(islower(str[i]))
        //         {
        //             str[i] = toupper(str[i]);
        //         }
        //         i++;
        //     }
        //     return *this;
        // }
        MyString& operator--()
        {
            std::cout << "Hello from -- operator overloading...." << std::endl;
            int i = 0;
            while(str[i] != '\0')
            {
                if(isupper(str[i]))
                {
                    str[i] = tolower(str[i]);
                }
                i++;
            }
            return *this;
        }
        MyString operator+(const MyString& obj)
        {
            char *buffer = new char[strlen(obj.str) + strlen(str) + 1];
            strcpy(buffer,str);
            strcat(buffer,obj.str);
            MyString temp(buffer);
            delete[] buffer;
            return temp;
        }
        MyString operator-(char *sub)
        {
            char *buffer = new char[(strlen(str) - strlen(sub)) + 1];
            char *sub_ptr = strstr(str,sub);
            if(sub_ptr != nullptr)
            {
                int i=0;
                while(&str[i] != sub_ptr)
                {
                    buffer[i] = str[i];
                    i++;
                }
                int j = i + strlen(sub);
                while(str[j] != '\0')
                {
                    buffer[i] = str[j];
                    i++;
                    j++;
                }
                buffer[i] = '\0';
                MyString temp(buffer);
                delete[] buffer;
                return temp;
            }
            else
            {
                std::cout << "sub string not exsist..."<<std::endl;
                return *this;
            }
        }
        bool operator>(MyString& obj)
        {
            int i = 0;
            while(str[i] != '\0')
            {
                if(str[i] != obj.str[i])
                {
                    bool result = (str[i] > obj.str[i]) ? true:false;
                    return result;
                }
                i++;
            }
            return false;
        }
        void Display()
        {
            if(str != nullptr)
            {
                std::cout << str << std::endl;
            }
            else
            {
                std::cout << "Can't delete nullptr..." << std::endl;
            }
        }
        ~MyString()
        {
            std::cout << "Hello from destructor...." << std::endl;
            if(str != nullptr)
            {
                delete[] str;
            }
            else
            {
                std::cout << "Can't delete nullptr..." << std::endl;
            }
        }
        friend MyString& operator++(MyString& lhv);
};
MyString& operator++(MyString& lhv)
{
    std::cout << "Hello from ++ operator overloading...." << std::endl;
    int i = 0;
    while(lhv.str[i] != '\0')
    {
        if(islower(lhv.str[i]))
        {
            lhv.str[i] = toupper(lhv.str[i]);
        }
        i++;
    }
    return lhv;
}
int main()
{
    // MyString str("Mohamed");
    // str.Display();

    // MyString str1("Ahmed");
    // MyString str2 = str1;
    // str2.Display();

    // MyString str1 = std::move(MyString("Mohanad"));
    // str1.Display();

    // std::vector<MyString *> vec;

    // vec.push_back(new MyString("Ahmed"));
    
    // vec[0]->Display();

    // delete vec[0];

    // MyString str1("Ahmed");
    // MyString str2;

    // str2 = "Essam";

    // str2.Display();

    MyString str = "mohamed";
    MyString str2;

    str2 = ++str;

    str2.Display();

    // MyString str = "AHMED";

    // MyString str2 = --str;

    // str2.Display();

    // MyString str1 = "Ahmed";
    // MyString str2 = "Mohamed";

    // MyString str3 = str1 + str2;

    // str3.Display();

    // MyString str1 = "Ahmed Mohamed";
    // str1 = str1 - "Moha"; 

    // str1.Display();

    // MyString str1 = "Mohamed";
    // MyString str2 = "Essam";

    // bool result = str2 > str1;

    // std::cout << "str2 > str1 => " << result <<std::endl;
    return 0;
}