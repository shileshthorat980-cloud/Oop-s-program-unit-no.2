#include <iostream>  // Includes the input/output stream library

class Base {  // Defines the Base class
public:

    // Virtual destructor of Base class
    virtual ~Base() {
        std::cout << "Base destructor\n";  // Displays Base destructor message
    }
};

class Derived : public Base {  // Derived class inherits from Base
public:

    // Destructor of Derived class
    ~Derived() override {
        std::cout << "Derived destructor\n";  // Displays Derived destructor message
    }
};

int main() {  // Main function where program execution starts

    // Creates a Derived object dynamically and stores its address in Base pointer
    Base* pointer = new Derived();

    // Deletes the object using Base pointer
    // Because destructor is virtual, Derived destructor is called first
    delete pointer;

    return 0;  // Ends the program successfully
}
