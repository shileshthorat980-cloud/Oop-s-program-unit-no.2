#include <iostream>                         // Includes input/output library

class Complex {                            // Defines a class named Complex

private:
    int real;                              // Stores the real part
    int imaginary;                         // Stores the imaginary part

public:

    // Constructor to initialize real and imaginary parts
    Complex(int realPart = 0, int imaginaryPart = 0)
        : real(realPart), imaginary(imaginaryPart) {}

    // Declares a friend function for adding an integer and a Complex number
    friend Complex operator+(int value, const Complex& number);

    // Function to display the complex number
    void display() const {

        std::cout << real;                 // Prints the real part

        // Checks whether imaginary part is positive or negative
        if (imaginary >= 0) {
            std::cout << " + ";            // Prints + if imaginary is positive
        } else {
            std::cout << " - ";            // Prints - if imaginary is negative
        }

        // Prints the imaginary value followed by 'i'
        std::cout << (imaginary >= 0 ? imaginary : -imaginary) << "i\n";
    }
};

// Defines the friend operator+ function
Complex operator+(int value, const Complex& number) {

    // Adds integer value to the real part
    // Keeps the imaginary part unchanged
    return Complex(value + number.real, number.imaginary);
}

int main() {                                // Main function starts

    // Creates a Complex object with real = 2 and imaginary = 3
    Complex number(2, 3);

    // Adds 10 to the Complex number using overloaded + operator
    Complex result = 10 + number;

    // Displays the result message
    std::cout << "Result: ";

    // Displays the resulting complex number
    result.display();

    return 0;                               // Ends the program successfully
}
