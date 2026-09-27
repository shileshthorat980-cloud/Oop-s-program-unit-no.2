#include <iostream>  // Includes input/output library
#include <memory>    // Includes smart pointers like unique_ptr
#include <vector>    // Includes vector container

class Shape {  // Defines the base class Shape
public:
    virtual double area() const = 0;  // Pure virtual function to calculate area

    virtual void displayName() const = 0;  // Pure virtual function to display shape name

    virtual ~Shape() = default;  // Virtual destructor
};

class Rectangle : public Shape {  // Rectangle inherits from Shape
private:
    double length;  // Stores the length of rectangle
    double width;   // Stores the width of rectangle

public:
    // Constructor to initialize length and width
    Rectangle(double givenLength, double givenWidth)
        : length(givenLength), width(givenWidth) {}

    // Overrides the area function of Shape
    double area() const override {
        return length * width;  // Calculates and returns rectangle area
    }

    // Overrides the displayName function
    void displayName() const override {
        std::cout << "Rectangle";  // Displays "Rectangle"
    }
};

class Circle : public Shape {  // Circle inherits from Shape
private:
    double radius;  // Stores the radius of circle

public:
    // Constructor to initialize radius
    explicit Circle(double givenRadius) : radius(givenRadius) {}

    // Overrides the area function of Shape
    double area() const override {
        constexpr double PI = 3.141592653589793;  // Defines the value of PI
        return PI * radius * radius;  // Calculates and returns circle area
    }

    // Overrides the displayName function
    void displayName() const override {
        std::cout << "Circle";  // Displays "Circle"
    }
};

int main() {  // Main function where program execution starts

    // Creates a vector to store unique pointers to Shape objects
    std::vector<std::unique_ptr<Shape>> shapes;

    // Creates a Rectangle object and adds it to the vector
    shapes.push_back(std::make_unique<Rectangle>(5.0, 3.0));

    // Creates a Circle object and adds it to the vector
    shapes.push_back(std::make_unique<Circle>(2.0));

    // Loops through every shape in the vector
    for (const auto& shape : shapes) {

        shape->displayName();  // Displays the name of the shape

        // Calculates and displays the area
        std::cout << " Area: " << shape->area() << '\n';
    }

    return 0;  // Ends the program successfully
}
