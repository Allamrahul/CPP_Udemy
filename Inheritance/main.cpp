// #include <iostream>

// using namespace std;

// class Base {
//     // friends of Base has access to all
//     public:
//         int a {0};
//         void display() {std::cout << a << " " << b << " " << c <<std::endl;} // member method has access to all
//     protected:
//         int b {0};
//     private:
//         int c {0};

// };


// class Derived : public Base {
//     // friend of derived have access to only what derived has access to
//     // a will be public
//     // b will be protected
//     // c will be inaccessible

//     public:

//         void access_base_members() {
//             a = 100;    // ok
//             b = 200;    // ok
//             // c = 300;    // not ok
//         }
// };

// int main() {

//     cout << "========Base member object access from base objects=========\n";

//     Base base;  // base constructor called
//     base.a = 100;   // OK
//     // base.b = 200;   // compiler error
//     // base.c = 300;   // compiler error

//     cout << "========Base member object access from derived objects=========\n";

//     Derived derived; // base constructor called first, derived constructor called next
//     derived.a = 100;    // OK
//     // derived.b = 200;    // compiler error
//     // derived.c = 300;    // compiler error

//     return 0;
// }