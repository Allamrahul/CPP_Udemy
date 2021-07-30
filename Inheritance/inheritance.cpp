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

#include "Account.h"
#include "SavingAccount.h"


class Base {
    private:
        int value;

    public:
        Base() : value {0} {
            cout << "Base no args constructor \n";
        }

        Base(int x) : value {x} {
            cout << "Base (int) overloaded constructor \n";
        }

        ~Base() {
            cout << "Base destructor \n";
        }
};

class Derived : public Base {
    private:
        int doubled_val;
    public:
        Derived() : doubled_val {0} {
            cout << "Derived no args constructor \n";
        }

        Derived(int x) : doubled_val {x*2} {    // when Derived object is constructed with a parameter, it woud first come here, then calls the no args
        // constructor of base class instead of base class parameterized constructor and then it comes back and executes the derived
        // class constructor. It can be forced to call the parameterized constructor of the base class instead of the default constructor of the base class. 
            cout << "Derived (int) overloaded constructor \n";
        }

        ~Derived() {
            cout << "Derived desstructor \n";
        }


};

int main() {


    /*
    Inheritance provides a method for creating new classes from existing classes
    The new class contains data and behavior of existing class
    Allows for reuse of existing class
    Allows new classes to modify behaviors of existing classes to make it unique without actually modifying the original class

    Related classes: savings account, checking account
                    Person, Employee, student, Faculty, Staff

    Ex: Account
            balance, deposit, withdraw
        Savings account
            balance, deposit, withdraw, interest rate, ..
        Checking account
            balance, deposit, withdraw, minimum balance, per check fee
        Trust Account
            balance, deposit, withdraw, interest rate

        We can see that these types of accounts are very different but they have some common attrubutes and behaviors

        Without inheritance, if you implement the above , you would see code duplication all over

        Inheritance is the process of creating new classes from existing classes. Its a mechanism that allows us to reuse existing code. 
        In this course, we will mainly talk about single inheritance, that is we create a new class based on another 'single' class
        Multiple inheritance is when we create a new class from 2 or more other classes

        Base class/ parent class/ super class - The class being extended or inherited from
        Derived class/ child class/ sub class - The class being created from base class. Will inherit attributes and operations from base class

        "Is A" relationship - when we use classic/public inheritance, our derived classes are generally sub types of base classes. This implies 
        a "Is-A" relationship. So, a circle is a shape, a savings account is an account; derived classes are sub types of base classes

        Generalization: Combining similar classes into a single, more general class based on commom attributes. The more general class, obviously more 
        abstract and therefore potentially can be used more easily

        Specialization: The opposite of generalization. Its about creating new classes from existing classes. These new classes generally
        add attributes and operations to the already inherited ones. 

        Inheritance or class hierarchies: organization of inheritance relationships so that we can more effectively organize and reuse code

        public inheritance vs composition

        Public inheritance - creates a "is-a" relationship between derived class and base class
            Employee 'is a' person
            Checking account 'is a' account
        Sometimes 'is a' relationship does not apply. This is where we use composition to model this relationship
        Composition - 'has a' relationship
            person 'has a' account
            Player 'has a' special attack 

        Using a combination of public inheritance and composition, we can express complex relationships between classes and leverage code reuse

        Access specifier can be public, private or protected

        public: Most common, Establishes 'is-a' relationship between Derived and base classes
        private and protected: Establishes "derived class has a base class" relationship


    */

//    cout << "================ACCOUNT=================\n";

//    Account acc {};

//    acc.deposit(1000);
//    acc.withdraw(500);

//    cout << endl;

//     Account *ptr_acc {nullptr};
//     ptr_acc = new Account();
//     ptr_acc->deposit(2000);
//     ptr_acc->withdraw(500);

//     delete ptr_acc;

//     cout << "================SAVING ACCOUNT=================\n";
   
//    SavingAccount sav_acc {};

//    sav_acc.deposit(2000);
//    sav_acc.withdraw(500);

//    cout << endl;

//     SavingAccount *ptr_sav_acc {nullptr};
//     ptr_sav_acc = new SavingAccount();
//     ptr_sav_acc->deposit(2000);
//     ptr_sav_acc->withdraw(500);

//     delete ptr_sav_acc;

    /*
    protected class member modifier

    Protected class members are accessible to all methods of the class itself. Protected class members are also accessible by any derived classs
    that have been derived from the base class. However protected class members act like private class members, i.e they are not accessible from
    objects of either the base class or the derived class

    let a,b,c be integer members of a class with access modifiers public, protected, private
    a - public
    b - protected
    c - private

    Access depends on the type of inheritance involved

    Access with public inheritance

    base class          Access in derived class
    public: a           public : a
    protected : b       protected : b    
    privat : c          c : no access

    The derived class does not have access to the private variables of base class. Any attemt to access base class private class members from derived class
    results in compiler error

    protected is protected which means no matter how deep the class hierarchy goes, the protected class members will be accessible by all derived 
    classes

    Access with protected inheritance

    base class          Access in derived class
    public: a           protected : a
    protected : b       protected : b    
    privat : c          c : no access

    Access with private inheritance

    base class          Access in derived class
    public: a           private : a
    protected : b       private : b    
    privat : c          c : no access


    constructors and destructors

    the base part of the derived class must be initialized before the derived class is initialized

    When a derived class object is created, first the base class constructor executes and then the derived class constructor executes

    Class destructors are invoked in the reversed order as constructors. The derived part of the derived class MUST be destroyed before base 
    class destructor is invoked

    When a derived object is destroyed, 
    Derived class destructor executes first
    Base class destructor executes next

    */
//    cout << endl;
//    Base b;  // base contructor -> base destructor

//    Derived d;   // base constructor -> derived constructor -> derived desctructor -> base destructor

   /*
    A base class does not inherit 
        base class constructors
        base class destructor
        base class overloaded assignment operator
        base class friend functions
    
    However, the derived class constructiors, destructors and overloaded assignment operators can invoke the base class versions


    When you dont provide the constructor in your derived class, compiler will automatically provide a default constructor. WHen the derived class
    objct is created, the base class constructor is called but since the compiler provided the default constrctor in derived class,
    data members of the derived class will be uninitialized.
   */



    return 0;

}

