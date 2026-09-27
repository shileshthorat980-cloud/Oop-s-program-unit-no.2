#include <iostream>                         // Includes the input/output library

class Shape {                               // Defines the base class Shape
public:                                     // Public access specifier

    virtual double area() const {           // Virtual function to calculate area
        return 0.0;                         // Returns 0 as default area
    }

    virtual ~Shape() = default;             // Virtual destructor
};

class Rectangle : public Shape {             // Rectangle inherits from Shape
private:                                    // Private data members
    double length;                          // Stores the length
    double width;                           // Stores the width

public:                                     // Public members

    Rectangle(double givenLength, double givenWidth) // Rectangle constructor
        : length(givenLength), width(givenWidth) {}  // Initializes length and width

    double area() const override {           // Overrides Shape's area() function
        return length * width;               // Returns area of rectangle
    }
};

class Circle : public Shape {                // Circle inherits from Shape
private:                                    // Private data member
    double radius;                          // Stores the radius

public:                                     // Public members

    explicit Circle(double givenRadius)      // Circle constructor
        : radius(givenRadius) {}             // Initializes radius

    double area() const override {            // Overrides Shape's area() function
        constexpr double PI = 3.141592653589793; // Defines constant value of PI
        return PI * radius * radius;          // Returns area of circle
    }
};

void printArea(const Shape& shape) {          // Function accepts any Shape object
    std::cout << "Area: " << shape.area() << '\n'; // Displays the calculated area
}

int main() {                                 // Main function starts

    Rectangle rectangle(5.0, 3.0);           // Creates Rectangle object
    Circle circle(2.0);                       // Creates Circle object

    printArea(rectangle);                    // Calls printArea for Rectangle
    printArea(circle);                       // Calls printArea for Circle

    return 0;                                // Ends the program successfully
}
