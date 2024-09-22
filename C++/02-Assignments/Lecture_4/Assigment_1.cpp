#include <iostream>

class ComplexNumber
{
    private:
        double real;
        double imag;
    
    public:
        ComplexNumber(double cp_real, double cp_imag): real(cp_real), imag(cp_imag){}
        
        ComplexNumber& operator+(const ComplexNumber& obj)
        {
            real = real+obj.real;
            imag = imag+obj.imag;
            return *this;
        }
        
        void Display()
        {
            if(imag >= 0)
            {
                std::cout << real << " + " << imag << "i" << std::endl;
            }
            else
            {
                std::cout << real << " - " << imag << "i" << std::endl;
            }

        } 
};

int main()
{
    ComplexNumber num1(5.1,3.4), num2(2.3,1.7);

    ComplexNumber sum = ComplexNumber(5.1,3.4) + num2;

    sum.Display();

    return 0;
}