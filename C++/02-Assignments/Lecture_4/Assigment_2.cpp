#include <iostream>

class Rectangle
{
    private:
        double length;
        double width;

    public:
        Rectangle(double cp_length, double cp_width):length(cp_length), width(cp_width){}
        
        bool operator==(const Rectangle& obj)
        {
            if((length == obj.length) && (width == obj.width))
            {
                return true;
            }
            else
            {
                return false;
            }
        }

        void Display()
        {
            std::cout << "Rectangle(" << length << "," << width << ")" << std::endl;
        }

};

int main()
{
    Rectangle rec1(5.4,3.2);
    Rectangle rec2(5.4,3.2);

    if(rec1 == rec2)
    {
        std::cout << "Rectangles are equal." << std::endl;
    }
    else
    {
        std::cout << "Rectangles aren't equal." << std::endl;
    }

    return 0;
}