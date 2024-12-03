/*
We declare an integer array arr.
We use a pointer ptr to iterate through the array and calculate the sum.
The program prints the sum of the array elements.
*/

#include <iostream>

int main() {
    //while this is a trivial example, the size and array could come from anywhere here!
    //modify the size and array here, to see how that might be entered from a user, or a file, or a database!
    const int size = 5;
    int arr[size] = {2, 4, -6, 5, 8};
    
    
    int sum = 0;

    // Calculate sum using pointers
    for (int* ptr = arr; ptr < arr + size; ++ptr) {
        sum += *ptr;
    }

    std::cout << "Sum of array elements: " << sum << std::endl;

    return 0;
}
