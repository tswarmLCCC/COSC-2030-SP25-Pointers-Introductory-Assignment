# COSC-2030-SP25-Pointers-Introductory-Assignment

Take the following code to take the number entered in and dynamically allocate memory for the array instead of having it by set in stone to 6 here:

C++
#include <iostream>

int main() {

  // have the user enter in the number of elements they'd like to do the math on with a standard prompt

  int myArray[6]; // Static array declaration for 6 elements
  // Input array elements
  for (int i = 0; i < 6; ++i) {
    std::cout << "Enter element " << i + 1 << ": ";
    std::cin >> myArray[i];
  }

  // Calculate the sum of array elements
  int sum = 0;
  for (int i = 0; i < 6; ++i) {
    sum += myArray[i];
  }

  std::cout << "Sum of array elements: " << sum << std::endl;

  // Clean up memory
  delete[] myArray;

  return 0;
}
You will just need to add some user input, and probably a while loop to collect the data.  Then use the number of elements entered to make an array at runtime and do the summation!
