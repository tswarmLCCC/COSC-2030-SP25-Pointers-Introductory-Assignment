/*
Instructions for Learners:

Discuss with your peers what you expect the output to be.
Explain what each line of code does.
Make predictions about the values printed.
*/

#include <iostream>

int main() {
    int num = 42;
    int* ptr = &num;
    int num2 = 21;

    //this should be the baseline.  We know what this will do...
    std::cout << "Value of num: " << num << std::endl;
    
    //what does & mean here?  
    std::cout << "Address of num: " << &num << std::endl;
    
    std::cout << "Value of ptr: " << ptr << std::endl;
    
    //does the * note here mean something different from above when we delcared *ptr?
    std::cout << "Dereferenced value of ptr: " << *ptr << std::endl;

    // do you think  this will work?  Why or why not?
    *ptr = num2;
    std::cout << "Dereferenced value of ptr: " << *ptr << " and value of ptr" <<  ptr << std::endl;

    //what if we re-assign num2?  (hint - this creates a new place for num2 - what happens to *ptr?)
    num2 = 1234;

    std::cout << "Dereferenced value of ptr: " << *ptr << " and value of ptr" <<  ptr << std::endl;

    return 0;
}
