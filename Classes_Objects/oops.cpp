#include <iostream>
#include<vector>
#include<string>
#include <cctype>
#include <cstring> // for c style string functions
#include <cstdlib> // for character based functions
#include <cmath>
#include <stack>

using std::string;
using std::vector;
using std::cout; 
using std::cin; 
using std::endl;


class Player {

private:
    // attributes
    string name;
    int health;
    int xp;

public:
    // methods
    void talk(string text_to_say) {
        cout << name << " says " << text_to_say << endl;
    }
    bool is_dead();

};


class Account {

private:
    string name;
    double balance;

public:
    bool withdraw(double bal){balance -= bal; cout << "In withdraw\n";}
    bool deposit(double bal) {balance += bal; cout << "In deposit\n";}

    // void set_balance(double bal)
    // {
    //     balance = bal;
    // }
    // double get_balance(){
    //     return balance;
    // }

    // or
     
    void set_balance(double bal);
    double get_balance();

};


void Account::set_balance(double bal)
    {
        balance = bal;
    }
double Account::get_balance(){
    return balance;
}

int main() {

    // OOPS - its all about modelling your software in terms of classes and objects. Allows developers to think at a higher level of abstraction
    // Encapsulation - objects contain data and operations that work on that data
    // Information hiding - OOPS allows us to hide implementation specific logic in a class so that so thats its only available within the class
    // Easier to test, debug, maintain and extend 
    // Resuability - easier to reuse classes in other applications 
    // Inheritance - can create new classes in terms of existing classes

    // Player frank;
    // Player hero;

    // Player *enemy = new Player();
    // delete enemy;


    // Account Rahul;
    // Account Rishi;
    // Account Manoj;

    // vector<Account> vec {Rahul, Rishi};
    // Account accounts[] {Rahul, Rishi};
    // vec.push_back(Manoj);

    // if we have a pointer to an object, we can either
    // a. use member of pointer operator(dereference the pointer and then use dot operator)
    // b. use arrow operator

    // if we have a pointer to an object, we have to dereference the pointer to get to the object. 
    
    //Account *frank_acc = new Account();

    //(*frank_acc).balance = 500; or frank_acc->balance
    // (*frank_acc).deposit(500); or frank_acc->deposit(500)


    // BY default all info in a class is private

    // Player Frank;

    // Frank.name = "Frank";
    // Frank.health = 100;
    // Frank.xp = 12;

    // Frank.talk("Hello!");

    // Player *enemy = new Player();
    // (*enemy).name = "Enemy";
    // (*enemy).health = 100;
    // (*enemy).xp = 12;

    // enemy->talk("I will destroy you.");


    // Account frank_account;

    // frank_account.name = "Frank's account";
    // frank_account.balance = 5000;
    // frank_account.deposit(100);
    // frank_account.withdraw(500);


    // public vs private 
    /*
    3 class member access modifiers - public (accessible anywhere)
     private - accessible only by members or friends of class
     protected - used with inheritance   
      */

    // Player frank;
    // //frank.name = "Frank"; // compiler error. since name attribute is private class member, it can only be accessed from within the class.
    // //frank.health = 1000;  // compiler error

    // frank.talk("Yolo");     // allowed since talk member function is public in nature

    // Player *enemy = new Player();
    // // enemy->xp = 100; compiler error, not allowed since xp is a private member of the class 
    // enemy->talk("Yolo"); // this works

    // delete enemy;

    //Implementing member methods





    return 0;
}