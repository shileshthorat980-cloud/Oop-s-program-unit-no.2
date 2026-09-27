#include <iostream>                    // Includes input/output library

class Animal {                         // Defines the Animal base class
public:                                // Public access specifier

    virtual void sound() const {       // Virtual function for sound
        std::cout << "Animal makes a sound\n"; // Prints Animal sound
    }

    virtual ~Animal() = default;       // Virtual destructor
};

class Dog : public Animal {            // Dog inherits from Animal
public:                                // Public access specifier

    void sound() const override {      // Overrides Animal's sound() function
        std::cout << "Dog barks\n";    // Prints Dog's sound
    }
};

class Cat : public Animal {            // Cat inherits from Animal
public:                                // Public access specifier

    void sound() const override {      // Overrides Animal's sound() function
        std::cout << "Cat meows\n";    // Prints Cat's sound
    }
};

int main() {                           // Main function starts

    Dog dog;                            // Creates an object of Dog class
    Cat cat;                            // Creates an object of Cat class

    Animal* animal = &dog;              // Animal pointer points to Dog object
    animal->sound();                    // Calls Dog's sound() using virtual function

    animal = &cat;                      // Animal pointer now points to Cat object
    animal->sound();                    // Calls Cat's sound() using virtual function

    return 0;                           // Ends the program successfully
}
