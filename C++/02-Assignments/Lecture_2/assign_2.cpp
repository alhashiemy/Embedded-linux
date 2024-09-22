#include <iostream>

int main() {
    int n; // number of rows
    std::cout << "Please enter the number of rows(half of the diamond): ";
    std::cin  >> n;
    // print upper half of the diamond
    for(int i = 1; i <= n; i++) {
        // print spaces
        for(int j = 1; j <= n - i; j++) {
            std::cout << " ";
        }
        // print asterisks
        for(int k = 1; k <= 2*i - 1; k++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    // print lower half of the diamond
    for(int i = n - 1; i >= 1; i--) {
        // print spaces
        for(int j = 1; j <= n - i; j++) {
            std::cout << " ";
        }
        // print asterisks
        for(int k = 1; k <= 2*i - 1; k++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}