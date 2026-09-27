#include <iostream>  // Includes the input/output stream library

class Base {  // Defines the Base class
public:

    // Virtual function to display the object type
    virtual void display() const {
        std::cout << "Base object\n";  // Displays Base object
    }

    virtual ~Base() = default;  // Virtual destructor
};

class Derived : public Base {  // Derived class inherits from Base
public:

    // Overrides the display function of Base class
    void display() const override {
        std::cout << "Derived object\n";  // Displays Derived object
    }
};

// Function that receives Base object by value
void displayByValue(Base object) {
    object.display();  // Calls display function of the copied Base object
}

// Function that receives Base object by reference
void displayByReference(const Base& object) {
    object.display();  // Calls the overridden display function
}

int main() {  // Main function where program execution starts

    Derived derived;  // Creates an object of Derived class

    // Displays the heading for pass-by-value
    std::cout << "Passing by value: ";

    // Passes Derived object by value to the function
    displayByValue(derived);

    // Displays the heading for pass-by-reference
    std::cout << "Passing by reference: ";

    // Passes Derived object by reference to the function
    displayByReference(derived);

    return 0;  // Ends the program successfully
}
