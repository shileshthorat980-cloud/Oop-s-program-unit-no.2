#include <iostream>  // Includes input/output stream library
#include <string>    // Includes string library

class Payment {  // Defines the base class Payment
public:

    // Pure virtual function for making a payment
    virtual void pay(double amount) const = 0;

    // Virtual destructor
    virtual ~Payment() = default;
};

class CardPayment : public Payment {  // CardPayment inherits from Payment
public:

    // Overrides the pay function
    void pay(double amount) const override {
        // Displays card payment details
        std::cout << "Paid Rs. " << amount << " using card\n";
    }
};

class UpiPayment : public Payment {  // UpiPayment inherits from Payment
public:

    // Overrides the pay function
    void pay(double amount) const override {
        // Displays UPI payment details
        std::cout << "Paid Rs. " << amount << " using UPI\n";
    }
};

class NetBankingPayment : public Payment {  // NetBankingPayment inherits from Payment
public:

    // Overrides the pay function
    void pay(double amount) const override {
        // Displays net banking payment details
        std::cout << "Paid Rs. " << amount << " using net banking\n";
    }
};

// Function that accepts any Payment object by reference
void processPayment(const Payment& payment, double amount) {

    // Calls the appropriate pay() function
    payment.pay(amount);
}

int main() {  // Main function where program execution starts

    CardPayment card;  // Creates a CardPayment object

    UpiPayment upi;  // Creates a UpiPayment object

    NetBankingPayment netBanking;  // Creates a NetBankingPayment object

    // Processes a card payment of Rs. 1250
    processPayment(card, 1250.0);

    // Processes a UPI payment of Rs. 750
    processPayment(upi, 750.0);

    // Processes a net banking payment of Rs. 500
    processPayment(netBanking, 500.0);

    return 0;  // Ends the program successfully
}
