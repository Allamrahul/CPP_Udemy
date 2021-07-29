#include <iostream>
#include<vector>
#include<string>
#include <cctype>
#include <cstring> // for c style string functions
#include <cstdlib> // for character based functions
#include <cmath>
#include <stack>

#include "Account.h"
#include "player.h"

using std::string;
using std::vector;
using std::cout; 
using std::cin; 
using std::endl;


int main() {

    // Account frank_accont;

    // frank_accont.set_name("FRANK's ACCOUNT");
    // frank_accont.set_balance(1000);

    // cout << frank_accont.get_name() <<" initial balance: "<< frank_accont.get_balance() << endl;

    

    // if(frank_accont.deposit(10000))
    //     cout << "Deposit okay\n";
    // else
    //     cout << "Deposit not allowed\n";

    // if(frank_accont.withdraw(100))
    //     cout << "Withdrawl okay\n";
    // else
    //     cout << "Sorry, " << " Not sufficient funds!"<<endl;


    // constructors and destructors

    /*
    Constructor - special member method invoked during object creation, no return type and can be overloaded
    Destructor -  Special member method, same name as class preceded by tilde, invoked automatically when the object gets destroyed, no return and no parameter type, 
    only one destructor allowed per class (cannot be overloaded), useful to release memory and other classes. Destructor is called automatically when local object goes out of scope
    or when we delete a pointer to an object
    */

//    {
//        Player Slayer;
//        Player rahul {"Rahul", 100, 12};
//        Player hero {"Hero"};
//        Player villain {"Villain"};
//    } // 4 destructors called

//    Player *enemy = new Player("Enemy", 1000, 0);
//    delete enemy; // destructor called 


    // Default constructor or no-args constructor - does not expect any arguments. if you write no constructors in a class, C++ will generate a default constructor
    // that does nothing. Called when you instantiate a new object with no arguments

    // if you provide no constructor or destructor, c++ will automatically provide a default constructor and destructor 

    // constructor initializer lists - more efficient, initialization list immediately follows the parameter list 

    // so far we have written our code so that we initialize our data members in the constructor body by assigning values to them. While this works, it technically 
    // is not initialializtion because by the time the cnstructor body is executed, these member attributes have already been created. So we are only just assigning values
    // to already created attributes.
    /*
    What we want to do is have the memeber data values initialze to our values before the constructor body executes
    
    */



    return 0;
}