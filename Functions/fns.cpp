#include <iostream>
#include<vector>
#include<string>
#include <cctype>
#include <cstring> // for c style string functions
#include <cstdlib> // for character based functions
#include <cmath>

using std::string;
using std::vector;
using std::cout; 
using std::cin; 
using std::endl;

// function prototypes
int area_of_circle(int radius);
double calc_cost(double base_cost, double tax_rate = 0.08);

int add_numbers(int a, int b);
double add_numbers(double a, double b);

void print(vector<string>);
void print(string, string);

void zero_array(int arr [], size_t sz);
void print_array(const int arr [], size_t sz);
void print_array(vector<int> &vec);

void scale_number(int &num);
void swap(int &a, int &b);

// ----------------

const double pi {3.14};


double calc_cost(double base_cost, double tax_rate)
{
    return base_cost += (base_cost * tax_rate);
}

int main()
{
    // https://en.cppreference.com/w/cpp/header - c++ standard library header files

    // cout <<sqrt(5) <<endl;
    // cout <<ceil(sqrt(5)) <<endl;
    // cout << area_of_circle(5);

    // cout << calc_cost(25, 0.05) << endl;
    // cout << calc_cost(25) << endl;

    // cout << add_numbers(2.2, 3.3);
    // cout << add_numbers(2, 3); 

    // vector<string> vec {"Nancy", "drew", "andy"};
    // print(vec);
    // print("Rahul", "Allam");


    // array name evaluates to the address of the 1st element of the array
    // int arr [] {1, 2, 53, 4};
    // zero_array(arr, sizeof(arr)/sizeof(arr[0]));

    // if we just want to print the array and not modify it, we can ask the compiler to make sure that we dont change it by mistake

    // pass ny reference
        /*
        sometimes we want to be able to change the actual param from within function body. In order to this,  we need address of actual param.
        We saw how this is in effect with array, but what about other varaible types?
        We can use reference param to tell the compiler to pass in a reference to the actual param. The formal param will now be an alias to the actual param.
        The formal param acts as an alias to the actual param. Operation done on the formal param == Operation done on the actual param
        */
    
    // int number {105};
    // scale_number(number);
    // cout << number <<endl;

    // swap two num by pass by ref

    // int a {5}; int b {10};

    // swap(a, b);

    // cout << a << " " << b << endl;

    vector<int> vec {1,3,4,5,7};

    print_array(vec);


    return 0;
}

int area_of_circle(int radius){
    return pi * pow(radius, 2);
}

int add_numbers(int a, int b) {
    return a+b;
}
double add_numbers(double a, double b) {
    return a+b;
}


void print(vector<string> vec) {
    for(auto x: vec)
        cout << x << " ";
    cout << endl; 
}

void print(string s1, string s2) {
    cout << s1 << " " << s2 << endl;
}

void zero_array(int arr [], size_t sz) {
    for(size_t i {0}; i < sz; i++) {
        arr[i] = 0;             // we are changing the orginal array that was passed.
    }
    cout <<endl;
}


void print_array(const int arr [], size_t sz) // we can define function parameters are const parameters. This tells compiler that these parameters are read only in the function body
 {
     for(size_t i {0}; i < sz; i++) {
        cout << arr[i] << " ";
    }
    //arr[2] = 0; // not allowed since arr is const
 }

 void print_array(const vector<int> &vec) // passing my reference avoids the unnecessary copy 
 {  // constant reference because we dont want to change the vector by mistake
     for(size_t i {0}; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    //arr[2] = 0; // not allowed since arr is const
 }

 void scale_number(int &num) {
     if(num > 0100)
        num = 100;
 }

 void swap(int &a, int &b) {
     int temp = a;
     a = b;
     b = temp;
 }