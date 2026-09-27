#include <iostream>                    // Includes the input/output library

class Number {                         // Defines a class named Number
private:
    int value;                         // Private variable to store the number

public:
    // Constructor to initialize the value
    explicit Number(int givenValue) : value(givenValue) {}

    // Overloads the unary minus (-) operator
    Number operator-() const {
        return Number(-value);         // Returns a new Number with negative value
    }

    // Function to display the value
    void display() const {
        std::cout << value << '\n';    // Prints the value on the screen
    }
};

int main() {                           // Main function starts here

    Number first(25);                  // Creates object 'first' with value 25

    Number second = -first;            // Uses overloaded - operator and stores -25

    std::cout << "Original value: ";   // Prints the original value message
    first.display();                   // Displays the value of first (25)

    std::cout << "Negated value: ";    // Prints the negated value message
    second.display();                  // Displays the value of second (-25)

    return 0;                          // Ends the program successfully
}
