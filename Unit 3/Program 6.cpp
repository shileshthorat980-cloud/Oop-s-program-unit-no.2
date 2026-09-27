#include <iostream>                         // Includes input/output library

class Distance {                            // Defines a class named Distance

private:
    int meters;                             // Stores distance in meters

public:

    // Constructor to initialize the distance
    explicit Distance(int value) : meters(value) {}

    // Overloads the > (greater than) operator
    bool operator>(const Distance& other) const {
        return meters > other.meters;       // Compares two distances
    }

    // Function to display the distance
    void display() const {
        std::cout << meters << " meters\n"; // Prints distance in meters
    }
};

int main() {                                // Main function starts

    // Creates first Distance object with 120 meters
    Distance first(120);

    // Creates second Distance object with 90 meters
    Distance second(90);

    // Displays message for first distance
    std::cout << "First distance: ";

    // Displays the first distance
    first.display();

    // Displays message for second distance
    std::cout << "Second distance: ";

    // Displays the second distance
    second.display();

    // Checks whether first distance is greater than second
    if (first > second) {

        // Executes if first distance is greater
        std::cout << "First distance is greater\n";

    } else {

        // Executes if first distance is smaller or equal
        std::cout << "Second distance is greater or equal\n";
    }

    return 0;                               // Ends the program successfully
}
