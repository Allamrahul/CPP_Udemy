

#ifndef _SAVING_ACCOUNT_H_
#define _SAVING_ACCOUNT_H_

#include "Account.h"

class SavingAccount : public Account {  


    public:
        double int_rate;
        void deposit(double amount);
        void withdraw(double amount);
        SavingAccount();
        ~SavingAccount();
};
// SavingAccount 'is-a' Account
#endif