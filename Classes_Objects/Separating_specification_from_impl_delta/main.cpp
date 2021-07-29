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
#include "shallow.h"
#include "Deep.h"
#include "move.h"
#include "villain.h"

using std::string;
using std::vector;
using std::cout; 
using std::cin; 
using std::endl;


//void display_player(Player p);
Player create_enemy();
void display_shallow(Shallow obj2);
void display_deep(Deep);
void foo(int &num);
void foo(int &&num);
void display_villain_name(const Villain& v);
void display_player(Player& p);


int main() {

    

   /*
    Delegating constructors - often code for constructors is very similar, duplicated code an lead to errors,
    code for one constructor can call another in the initialization list
   */

//   Player empty;
//   Player Frank {"Frank"};
  //Player villain {"Villain", 100, 55};

  // Default constructor parameters : can simplify the code and reduce the number of overloaded constructors


  // copy constructor - when objects are copied, c++ must create a new object from an existing object. 
  /*
    the copy of an object is made when passing an object by value as a parameter, returning an object from a function by value, constructing one object based on 
    another in the same class   
    C++ must have a way of accpmplishing this so it provides a compiler defined copy constructor if you dont

    if you dont provide your own way of copying objects by value, then the compiler provides a default way of copying objects. Does a member wise copy


    Most of the time, default copy constructor is what you need. But if you are using raw pointers, only the pointer is copied and not the date it is pointing to.
    This is referred to a shallow copy rather than a deep copy

    Best practices - always use a user-defined copy constructor when your class has raw pointer members, provide the copy constructor with a const reference parameter


    // we pass the object as reference and a const.
    Why refernece? If we pass by value, then we have to make a copy of it. Thats the whole point of copy constructor. It would defeat the purpose and we end up with
    never ending recursive calls
    Const beacause we are copying the source, not modifying it. Const prevents any modification to the source object
  */

    // Declaring copy constructor

    


    // pass object by value

    // Player rahul {"Rahul", 100, 10};

    // Player enemy = create_enemy();


    // Player servant {rahul};  // a copy of servant is made here. copy constructor used here

    // Player empty {"Rahul", 100, 100};
    // display_player(empty);

    // Player other_obj {empty};


    // shallow copying with copy constructor
        /*
            Consider a class that contains a pointer as a data member
            Constructor allocates storage dynamically and initializes pointer
            Destructor releases the memory allocated by the constructor

            Shallow copy: Shallow copy is the default behavior provided by the compiler generaed copy constructor. It does a member wise copy of all object attributes
            So, you end yp with the newly created object and the object being copied both pointing to the same area of storage in the heap. When one of these objects goes out of scope i.e is destroyed,
            and its destructor is called. It will relase memory on the heap as it should. However, the other object is still pointing to the same released area on heap and thinks the 
            area is still valid. Do a deep copy to avoid this
    //     */
    //    Shallow obj1 {5};
    //    //cout << *(obj1.get_data()) << endl;
    //    display_shallow(obj1);

    //    Shallow obj2 {obj1};

    //    obj2.set_data_val(1000);

       //cout << *(obj1.get_data()) << endl;


       // Deep copying with copy constructors

       /*
       create a copy of the pointed to data
       each copy will have a pointer to a unique storage in heap
       Deep copy when you have a raw pointer as a class data member
       create a new storage and copy values in the copy constructor
       */


    //   Deep obj1 {5};

    //   display_deep(obj1);

    //   obj1.set_data_val(1000);

    //   Deep obj2 {obj1};

    //   display_deep(obj2);

    // Move constructor


    // r value references

    // int x {100};

    // int &l_ref {x};     // l_ref is a reference to an l value (x), which is addressable

    // l_ref = 10;

    // int &&r_ref = 100;    // r_ref is a reference to an r value
    // r_ref = 300; 

    // int &&x_ref = x; // not valid since x is an l value and x_ref is a reference to an r value


    // l value reference parameters

    // int x {100};

    // foo(x); // this is fine as x is an l value and num is a reference to an l value
    // // foo(100); // invalid since 100 is an r value and num is a reference to an l value


    // // r value reference parameters

    // foo(100);
    // boo(x); // invalid as x is an l velue as num is a reference to an r value


    // vector<Move> Vec;
    // Vec.push_back(Move{10}); // first, a temporary object is created since its an r value, then this object is copied to the vector. If a copy constructor is defined,
    //it will call the copy constructor. Otherwise, it will call the move constructor. So, a constructor and a 
    // copy contructir are called in sequence, when the move constructor is not present. But when the move constructor is present, we would copy data, member to member and 
    // null out the soource pointer. This avoids multiple deep copies, which can be a bottle neck.
    //Vec.push_back(Move{20});


    // this pointer is a reserved key word that conatains address to an object. So, its a pointer to an object that is currently being used by the class member methods
    // , can only be used within the scope of the class. Can be dereferenced to yield the current object


    // using const with classes

    //const Villain v1;   // const object
    // v1.set_name("Rishi"); // not allowed as set_name member function does not have a const qualifier, which gives it the permission to handle constant objects
    // cout << v1.get_name() << endl;  // works because get_name member function has the const qualifier. Even without const, it wont work. You will still get a compiler error though we are not tweaking the data member.

    // Villain Hero;
    // Hero.set_name("Rishi"); // this works because hero is not a const object
    // Villain hero;

    // cout << v1.get_name() << " " << hero.get_name() <<endl; // this will work now since const has been used in the member function

    // display_villain_name(v1);   // wont compile even though v is a const reference to villain
    // display_villain_name(hero); // this works now that get_name api is qualified as const

    // static class members

    // Class data members belong to the class and not the object. Useful to store classwide information. Class functions can be declared as static, independent of
    // any object. Can be called using class name

    // Player p1, p2;

    // cout << "Active players: " << Player::get_num_players() <<endl;

    // structs vs classes

    // struct is same as class except members are public by default

    // Friends of a class
    /*
        A friend is a function or class that has access to a private data member
        Can be regukar non-member methods or member methods of another class
        Another class can have access to private data members

        Friendship must be granted, not taken: Declared explicitly in the class that is granting friendship, declared in the function prototype wit friend keyword
        Friendship is not symmetric: If A is a friend of B, then it does not mean B is a friend of A
        Friendship is not transitive: If A is a friend of B and B is a friend of C, that does not mean A is a friend of C.
        Friendship must be explicitly granted

        Friendship is not inherited

    */

   Player p1 {"rahul",10,10};
   display_player(p1);

    return 0;
}

void display_player(Player& p) {    // since this a friend fucntion of class Player, it can directly access/modify the data members without getters or setter methods
    cout << p.get_name() << endl;
    cout << p.get_health() << endl;
    cout << p.get_xp() << endl;
}


void display_villain_name(const Villain& v) {
    cout << v.get_name() <<endl;
}


void foo(int &&num) {   // num is a reference to an r value

}

void foo(int &num) {

}

void display_deep(Deep obj2) { // when obj2 goes out of scope, the destructor is called and we release the newly created memory instead of the source memory
    cout << *(obj2.get_data()) << endl;
}

void display_shallow(Shallow obj2) {
    cout << *(obj2.get_data()) << endl;
}

Player create_enemy() {

    Player an_enemy {"Super Enemy", 1000, 1000};
    return an_enemy;       // a copy of an_enemy is returned and the copy constructor does this
}


// void display_player(Player p) { // rahul object is copied to p using the copy constructor

//     cout << p.get_name() << endl;
//     cout << p.get_health() << endl;
//     cout << p.get_xp() << endl;

//     // Destructor p is called when it goes out of scope
// }