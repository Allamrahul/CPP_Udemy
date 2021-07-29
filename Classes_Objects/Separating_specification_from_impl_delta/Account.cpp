#include "Account.h"


/*
includes with angle brackets is used to include system header files and compiler knows where these are located.
Includes with double quotes tell the compiler to include header files that are local to this project.
*/

void Account::set_balance(double bal) {
    balance = bal;
}

double Account::get_balance() {
    return balance;
}

void Account::set_name(string name) {
    this->name = name;
}
string Account::get_name() {
    return name;
}

bool Account::deposit(double amount) {
    balance += amount;
    return true;
}
bool Account::withdraw(double amount) {

    if(amount <= balance)
    {
        balance -= amount;
        return true;
    }
    return false;

    
}


// constructors

Account::Account() : Account{"Jane Doe", 0} {

}

Account::Account(string name_val) : Account{name_val, 0} {

}

Account::Account(string name_val, double balance_val) : name {name_val}, balance {balance_val} {

} 


// copy constructor

Account::Account(const Account &source) : name {source.name}, balance {source.balance} {
    
}