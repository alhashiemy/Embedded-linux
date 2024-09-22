
#include <iostream>

int main() {
    int arr[10], search;

    // Ask user to enter 10 numbers
    std::cout << "Enter 10 numbers: ";
    for (int i = 0; i < 10; i++) {
        std::cin >> arr[i];
    }

    // Ask user to enter a number to search
    std::cout << "Enter a number to search: ";
    std::cin >> search;

    // Search for the number Here is the rest of the code:

    bool found = false;
    int index = -1;

    // Search for the number in the array
    for (int i = 0; i < 10; i++) {
        if (arr[i] == search) {
            found = true;
            index = i;
            break;
        }
    }

    if (found) {
        std::cout << "Number found at index " << index+1 << std::endl;
    } else {
        std::cout << "Number not exist" << std::endl;
    }

    return 0;
}