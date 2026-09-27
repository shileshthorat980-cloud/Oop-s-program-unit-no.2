#include <iostream>                         // Includes input/output library

class Complex {                            // Defines a class named Complex

private:
    int real;                              // Stores the real part
    int imaginary;                         // Stores the imaginary part

public:

    // Constructor to initialize real and imaginary parts
    Complex(int realPart = 0, int imaginaryPart = 0)
        : real(realPart), imaginary(imaginaryPart) {}

    // Overloads the + operator for adding two complex numbers
    Complex operator+(const Complex& other) const {

        // Adds real parts and imaginary parts
        return Complex(real + other.real,
                       imaginary + other.imaginary);
    }

    // Function to display the complex number
    void display() const {

        std::cout << real;                 // Prints the real part

        // Checks whether the imaginary part is positive or negative
        if (imaginary >= 0) {
            std::cout << " + ";            // Prints + for positive value
        } else {
            std::cout << " - ";            // Prints - for negative value
        }

        // Prints the absolute value of imaginary part followed by i
        std::cout << (imaginary >= 0 ? imaginary : -imaginary) << "i\n";
    }
};

int main() {                               // Main function starts

    // Creates first complex number: 2 + 3i
    Complex first(2, 3);

    // Creates second complex number: 4 + 5i
    Complex second(4, 5);

    // Adds first and second using overloaded + operator
    Complex sum = first + second;

    // Displays message for first complex number
    std::cout << "First complex number: ";

    // Displays the first complex number
    first.display();

    // Displays message for second complex number
    std::cout << "Second complex number: ";

    // Displays the second complex number
    second.display();

    // Displays message for the sum
    std::cout << "Sum: ";

    // Displays the result of addition
    sum.display();

    return 0;                              // Ends the program successfully
}
