#include <iostream>
#include <cmath>

using namespace std;

double polygonArea(int n, double side) {
    return (n * side * side) / (4 * tan(3.14159 / n));
}

int main() {
    int n, repeat;
    double side;
    for(;;)
    {
        cout << "Enter number of sides: ";
        cin  >> n;
        std::cin.clear();
        fflush(stdin);

        cout << "Enter length of each side: ";
        cin  >> side;
        std::cin.clear();
        fflush(stdin);

        cout << "Area of polygon is: " << polygonArea(n, side) << endl;

        cout << "Hit any key to continue..";
        cin  >> repeat;
        std::cin.clear();
        fflush(stdin);

    }
    return 0;
}