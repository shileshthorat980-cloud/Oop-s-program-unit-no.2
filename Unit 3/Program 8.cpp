#include <iostream>              // Includes the input/output stream library

class Base {                     // Defines the Base class
public:                          // Public access specifier
    void display() const {       // Defines the display() function
        std::cout << "Base display function\n";  // Prints Base message
    }
};

class Derived : public Base {    // Defines Derived class inherited from Base
public:                          // Public access specifier
    void display() const {       // Defines display() function in Derived class
        std::cout << "Derived display function\n"; // Prints Derived message
    }
};

int main() {                     // Main function starts
    Derived derivedObject;       // Creates an object of Derived class

    Base* basePointer = &derivedObject; // Base pointer stores address of Derived object

    basePointer->display();      // Calls Base class display() function

    return 0;                    // Ends the program successfully
}
