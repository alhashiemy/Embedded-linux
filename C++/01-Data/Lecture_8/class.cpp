#include "class.h"


void CPP::Dim::setX(int cp_x)
{
    x = cp_x;
}
void CPP::Dim::setY(int cp_y)
{
    y = cp_y;
}
void CPP::Dim::setZ(int cp_z)
{
    z = cp_z;
}
void CPP::Dim::Display()
{
    std::cout << "X => "<<x<<std::endl;
    std::cout << "Y => "<<y<<std::endl;
    std::cout << "Z => "<<z<<std::endl;
}