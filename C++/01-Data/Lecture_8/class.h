#ifndef CLASS_H
#define CLASS_H


#include <iostream>

namespace CPP
{
    class Dim
    {
        private:
            int x;
            int y;
            int z;
        public:
            void setX(int cp_x);
            void setY(int cp_y);
            void setZ(int cp_z);
            void Display();
    };
}


#endif