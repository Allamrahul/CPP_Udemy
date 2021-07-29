
// specification for account class


// include guard is a preprocessor directives that guarantees the file will be only included once
#ifndef _ACCOUNT_H_ // this can be anything. Any name is fine as long as it is unique in the program. If the preprocessor has the name defined, it skips the entire file
                    // and goes to endif at the end
#define _ACCOUNT_H_

#include<string>
using std::string;

class Account {

private:
    string name;
    double balance;

public:

    // constructors

    Account();
    Account(string name, double balance);
    Account(string name);

    void set_balance(double bal);
    double get_balance();

    void set_name(string name);
    string get_name();

    bool deposit(double amount);
    bool withdraw(double amount);

    // Destructor

    ~Account();

};

#endif

// potential problem: If this file is included by more than one cpp file, then the compiler will see the declaration for the account class more than once and give us 
// an error for duplicate declarations. To avoid this, we can use an include guard. This will ensure the compiler will process this file only once no matter how many times
// its included.