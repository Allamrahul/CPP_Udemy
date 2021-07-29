#include "SavingAccount.h"
#include <iostream>

SavingAccount::SavingAccount() 
: int_rate {3.0} {

}

SavingAccount::~SavingAccount() {

}


void SavingAccount::deposit(double amount) {

    std::cout << "Saving Account deposit called with " << amount << std::endl;
}

void SavingAccount::withdraw(double amount) {

    std::cout << "Saving Account withdraw called with " << amount << std::endl;
}