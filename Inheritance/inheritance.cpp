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
        
    */
    return 0;

}