#include <iostream>
using namespace std;

int main() {
   double vehicleMpg;
   double* valPointer = nullptr;
   
   valPointer = &vehicleMpg;
   
   *valPointer = 29.6; // Assigns the number to the variable
                       // POINTED TO by valPointer.
   
   // vehicleMpg = 40.0;   // Uncomment this later
   
   cout << "Vehicle MPG = " << vehicleMpg << endl;
   cout << "Vehicle MPG = " << *valPointer << endl;
   
   return 0;
}
  int main() {
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