#include <string>

class Invoice {

    //The Invoice class represents a billing invoice with functionality to manage 
    //and calculate the total amount owed for various services.

    private:
    std::string invoiceID;
    int dollarsOwed;

    public:
    Invoice(std::string newID);
    void addServiceCost(int costDollars);
    int getDollarsOwed();
    std::string getInvoiceID();

};