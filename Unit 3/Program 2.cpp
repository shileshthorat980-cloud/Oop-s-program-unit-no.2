#include <iostream>              // Includes the input/output library

// Function to calculate the area of a square
int calculateArea(int side) {
    return side * side;          // Returns side × side
}

// Function to calculate the area of a rectangle
int calculateArea(int length, int width) {
    return length * width;       // Returns length × width
}

// Function to calculate the area of a circle
double calculateArea(double radius) {
    constexpr double PI = 3.141592653589793;  // Defines the value of PI
    return PI * radius * radius;              // Returns PI × radius × radius
}

int main() {
    // Calls the square function with side = 5 and displays the area
    std::cout << "Square Area: " << calculateArea(5) << '\n';

    // Calls the rectangle function with length = 6 and width = 4
    std::cout << "Rectangle Area: " << calculateArea(6, 4) << '\n';

    // Calls the circle function with radius = 2.0 and displays the area
    std::cout << "Circle Area: " << calculateArea(2.0) << '\n';

    return 0;                    // Ends the program successfully
}
