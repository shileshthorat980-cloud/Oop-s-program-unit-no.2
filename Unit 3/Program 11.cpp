#include <iostream>  // Includes the input/output stream library

class Shape {  // Defines the base class Shape
public:
    virtual double area() const = 0;  // Pure virtual function to calculate area
    virtual ~Shape() = default;  // Virtual destructor for proper object destruction
};

class Rectangle : public Shape {  // Rectangle inherits from Shape
private:
    double length;  // Stores the length of the rectangle
    double width;   // Stores the width of the rectangle

public:
    // Constructor to initialize length and width
    Rectangle(double givenLength, double givenWidth)
        : length(givenLength), width(givenWidth) {}

    // Overrides the area function of the Shape class
    double area() const override {
        return length * width;  // Calculates and returns rectangle area
    }
};

int main() {  // Main function where program execution starts
    Rectangle rectangle(8.0, 4.0);  // Creates a Rectangle object with length 8 and width 4

    // Displays the calculated area
    std::cout << "Rectangle Area: " << rectangle.area() << '\n';

    return 0;  // Ends the program successfully
}
