#include <iostream>                    // Includes input/output library

class Counter {                        // Defines a class named Counter

private:
    int value;                         // Stores the counter value

public:

    // Constructor initializes the counter value
    explicit Counter(int initialValue = 0) : value(initialValue) {}

    // Overloads prefix increment operator (++counter)
    Counter& operator++() {
        ++value;                       // Increases value by 1
        return *this;                   // Returns the current object
    }

    // Overloads postfix increment operator (counter++)
    Counter operator++(int) {
        Counter old = *this;            // Saves the old value
        ++value;                        // Increases the current value by 1
        return old;                     // Returns the old value
    }

    // Function to display the counter value
    void display() const {
        std::cout << value << '\n';     // Prints the value
    }
};

int main() {                            // Main function starts

    Counter counter(5);                 // Creates counter object with value 5

    // Displays message before prefix increment
    std::cout << "After prefix increment: ";

    ++counter;                          // Prefix increment: value becomes 6
    counter.display();                  // Displays 6

    // Displays message for postfix increment
    std::cout << "Value returned by postfix increment: ";

    Counter oldValue = counter++;       // Saves old value (6), then counter becomes 7
    oldValue.display();                // Displays old value 6

    // Displays message for final counter value
    std::cout << "Counter after postfix increment: ";

    counter.display();                  // Displays current value 7

    return 0;                           // Ends the program successfully
}
