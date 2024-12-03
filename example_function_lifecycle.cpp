#include <iostream>
#include <string>

class Person {
public:
    // Constructor
    Person(const std::string& name) : name_(name) {
        std::cout << "Constructor called for " << name_ << std::endl;
    }

    // Destructor
    ~Person() {
        std::cout << "Destructor called for " << name_ << std::endl;
    }

    // Print method
    void printInfo() const {
        std::cout << "Name: " << name_ << std::endl;
    }

private:
    std::string name_;
};

// Function to demonstrate passing by reference
void processByReference(const Person& person) {
    person.printInfo();
}

// Function to demonstrate passing by value
void processByValue(Person person) {
    person.printInfo();
}

void processByValue(Person *person) {
    person->printInfo();
}

int main() {
    Person alice("Alice");
    Person *pAllice = &alice;

    std::cout << "\nPassing by value:" << std::endl;
    processByValue(alice);

    std::cout << "Passing by reference:" << std::endl;
    processByReference(alice);

    std::cout << "Passing by pointer:" << std::endl;
    processByReference(alice);

     std::cout << "Leaving - the deconstructor will be called here, however during cleanup (not during the function)!" << std::endl;
    return 0;
}
