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

#include "MyString.h"


int main() {

    /*
    CPP allows the programmers to overload most operators to work with user drfined classes. This is intended to make code more readable and writable by allowing 
    the user familiar operators in familiar manner but with our own classes and objects

    using traditional operators +, -, * with user defined types
    Allows user defined types to behave similar to builtin types
    can make code more readable and writable

    The only operator that the compiler provides default implementation for is the assignment operator. Thats because the compiler must be able to assign one object to another
    All other operators that can be overlaoded must be explicitly defined by the programmer
    [], (), -> and the assignment operator must be declared as member methods. Other operators can be declared as member methods or global functions

    We can make the operator mean anything we want. So we want to make when we do overload operators, it makes sense and users of the class know about it.
    */

//    MyString empty;
//    MyString larry("Larry"); // parameterised constructor
//    MyString stooge {larry}; // copy constructor

//    empty.display();
//    larry.display();
//    stooge.display();


   // overloading the assignment operator
   /*
    cpp provides a default assignment operator used for assigning one object to another . If we dont provide our own overloaded assginment operator, cpp
    will provide a compiler generated one for you. Very similar to what we did with default copy constructor. The behavior for the default assignment is member
    wise assginment. i.e shallow copy. If your class does not have raw pointers, the default assignment operator will probably be fine. If classes with raw pointers, 
    so we overload the assignment operator so that the deep copy is the pointer to data on th heap
     
   */

//   MyString s1 {"Frank"};
//   MyString s2 {s1}; // Not assignment but initialization

  // s2 = s1; // assignment since s2 has already been created

  // overloading the copy assignment operator (deep copy)


    // MyString a {"Hello"};

    // MyString b;

    // b = a;

    // b = "This is a test";
    

    // MyString empty;
    // MyString larry("larry");
    // MyString stooge {larry};

    // empty = stooge;     // copy assignment operator

    // empty.display();
    // larry.display();
    // stooge.display();

    // vector<MyString> stooges;

    // stooges.push_back("larry");
    // stooges.push_back("Mow");

    // for(auto &x: stooges)
    //     x = "changed";


    // overloading the assignment operator (move)

    // copy assignment works with l value references while move assignment works with r value references

    /*
    Her we assign mystring object s1 with the string frank to it. The mystring object initialized with "Frank" must be constructed and once its constructed, it
    has no name. It a teporary object, and an r value. That means when we assign it to s1, the move assignment operator will be called since we are providing 
    an r value reference
    */

    // MyString a {"Hello"}; // overloaded constructor

    // a = MyString{"Hola"}; // overloaded constructor then move assignment

    // a = "Bonjour"; // overloaded constructor then move assignment



    // MyString empty;
    // MyString larry("larry");
    // MyString stooge {larry};

    // empty = stooge;     // Move assignment operator

    // empty = "Funny";


    // vector<MyString> stooges;

    // stooges.push_back("larry");
    // stooges.push_back("Mow");

    // for(auto &x: stooges)
    //     x = "changed";
    

  // overloading - sign

  // MyString upper {"LARRY"};

  // MyString lower = -upper;  // overloaded - sign 

  // upper.display();
  // lower.display();

  // std::cout << (lower == upper) << std::endl;

  // MyString concat = lower + upper;
  // concat.display();
  //MyString temp = concat + " is a stooge";

  //temp.display();

  // MyString stooges = lower + "Moe";
  // stooges.display();

  // MyString two_stooges = lower + " " + "Moe";
  // two_stooges.display();

  // MyString three_stooges = lower + " " + upper + " " + "Moe";
  // three_stooges.display();


  // overloading operators as global functions
  /*
  since we very often need access to private attributes in objects, you see these non member functions declared as friend functions of class in many applications.
  For unary operators, a single object is in the parameter list and in case of a binary object, two objects are in the parameter list.
  */

//  MyString larry {"Larry"};

//  larry.display();

//  larry = -larry;
//  larry.display();

//  MyString Moe {"Moe"};

//  MyString Stooge = larry;

//  std::cout << (larry == Moe) << std::endl;

//  MyString stooges = "Larry" + Moe;
//  stooges.display();

//  MyString two_stooges = Moe + " " + "Larry";
//  two_stooges.display();

//  MyString three_stooges = Moe + " " + larry + " " + "Curly";

//  three_stooges.display();
  

  // Overloading stream insertion and extraction operator

  /*
    Does not make sense to implement as member methods
    left operand must be a user defined class, not the way we normally use these operators

    Return a reference of ostream so that we can keep inserting. dont return ostream by value
  */

  MyString larry {"Larry"};
  MyString mow {"Moe"};

  MyString curly;

  std::cout << "Enter first name: ";
  std::cin >> curly;

  std::cout << "The three stooges are " << larry << ", " << mow << " and " << curly;

  std::cout << "\nEnter 3 stooges name separated by space: ";
  std::cin >> larry >> mow >> curly;

  std::cout << larry;

  std::cout << "The three stooges are " << larry << ", " << mow << " and " << curly;


    return 0;
}