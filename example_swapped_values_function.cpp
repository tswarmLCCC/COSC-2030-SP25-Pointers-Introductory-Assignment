#include <iostream>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;
    
    std::cout << "Before " << x << " and " << y << std::endl;
    
    swap(&x, &y); // Pass addresses

    std::cout << "Swapped values: " << x << " and " << y << std::endl;

    return 0;
}
