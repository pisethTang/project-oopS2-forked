#include "Invoice.h"
#include <string>

Invoice::Invoice(std::string newID){
    invoiceID = newID;
    dollarsOwed = 0;
}

void Invoice::addServiceCost(int costDollars){
    dollarsOwed = dollarsOwed + costDollars;
}

int Invoice::getDollarsOwed(){
    return dollarsOwed;
}

std::string Invoice::getInvoiceID(){
    return invoiceID;
}