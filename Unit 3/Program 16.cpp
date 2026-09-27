#include <iostream>  // Includes input/output stream library
#include <string>    // Includes string class
#include <utility>   // Includes std::move

class Employee {  // Defines the base class Employee
protected:
    int employeeId;       // Stores employee ID
    std::string name;     // Stores employee name

public:
    // Constructor to initialize employee ID and name
    Employee(int id, std::string employeeName)
        : employeeId(id), name(std::move(employeeName)) {}

    // Pure virtual function to calculate salary
    virtual double calculateSalary() const = 0;

    // Function to display basic employee details
    void displayBasicDetails() const {
        std::cout << "Employee ID: " << employeeId << '\n';  // Displays employee ID
        std::cout << "Name: " << name << '\n';              // Displays employee name
    }

    virtual ~Employee() = default;  // Virtual destructor
};

class PermanentEmployee : public Employee {  // PermanentEmployee inherits from Employee
private:
    double basicSalary;  // Stores basic salary
    double allowance;   // Stores additional allowance

public:
    // Constructor to initialize permanent employee details
    PermanentEmployee(int id, std::string employeeName, double basic, double extra)
        : Employee(id, std::move(employeeName)), basicSalary(basic), allowance(extra) {}

    // Overrides the salary calculation function
    double calculateSalary() const override {
        return basicSalary + allowance;  // Returns basic salary plus allowance
    }
};

class ContractEmployee : public Employee {  // ContractEmployee inherits from Employee
private:
    double hourlyRate;  // Stores payment per hour
    int hoursWorked;   // Stores total hours worked

public:
    // Constructor to initialize contract employee details
    ContractEmployee(int id, std::string employeeName, double rate, int hours)
        : Employee(id, std::move(employeeName)),
          hourlyRate(rate), hoursWorked(hours) {}

    // Overrides the salary calculation function
    double calculateSalary() const override {
        return hourlyRate * hoursWorked;  // Calculates salary using rate × hours
    }
};

// Function to print the employee's pay slip
void printPaySlip(const Employee& employee) {

    // Displays basic employee information
    employee.displayBasicDetails();

    // Calculates and displays the employee's salary
    std::cout << "Salary: Rs. " << employee.calculateSalary() << "\n\n";
}

int main() {  // Main function where program execution starts

    // Creates a permanent employee object
    PermanentEmployee permanentEmployee(
        101, "Asha", 40000.0, 8000.0
    );

    // Creates a contract employee object
    ContractEmployee contractEmployee(
        102, "Vikas", 500.0, 80
    );

    // Prints the pay slip of permanent employee
    printPaySlip(permanentEmployee);

    // Prints the pay slip of contract employee
    printPaySlip(contractEmployee);

    return 0;  // Ends the program successfully
}
