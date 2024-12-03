#include <iostream>

int main() {

    //have the user enter in the number of elements they'd like to do the math on with a standard prompt

    // Change this to take the number entered in and dynamically allocate memory for the array
    int myArray[6];
    // Input array elements
    for (int i = 0; i < 6; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> myArray[i];
    }

    // Calculate the sum of array elements, make sure change the 6 here!
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += myArray[i];
    }

    std::cout << "Sum of array elements: " << sum << std::endl;

    // Clean up memory
    delete[] myArray;

    return 0;
}
