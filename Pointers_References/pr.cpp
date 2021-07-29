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
void double_value(int *value_ptr);
void display(const vector<string> *const stooges_ptr);
void display(const int *arr, int sentinel);
void display_arr(const int *arr_ptr, int sz);
int* largest_int(int *l1_ptr, int *l2_ptr);
int* dynamic_create_array(size_t sz, int init_val);
void swap(int *a, int *b);
void print(int *arr1_ptr, const size_t array1_sz);
int* apply_all(int *arr1, size_t array1_sz, int *arr2, size_t array2_sz);

int main() 
{
    // pointers
    // int* int_ptr {nullptr};
    // char* char_ptr {nullptr};
    // string* string_ptr {nullptr};

    // int num {10};

    // cout << sizeof(num) << " " << &num <<endl;

    // int *p;

    // cout << "Value of p is " << p <<endl;

    // cout << "Address of p is " << &p;

    // cout << "Size of p" << sizeof(p) <<endl;

    // p = nullptr;

    // cout << "Value of p is " << p <<endl;

    // size of pointer variable

        // dont confuse size of pointer and size of what it points to
        //All pointers in a program have the same size
    
    // int *p1 {nullptr};
    // double *p2 {nullptr};

    // unsigned long long *p3 {nullptr};
    // vector<string> *p4;

    // cout << sizeof(p1) << " " << sizeof(p2) << " " << sizeof(p3) << " " << sizeof(p4) << endl; // 8 8 8 8 


    // double high_temp {100.7};
    // double low_temp {90.8};

    // double *ptr;

    // ptr = nullptr;

    // ptr = &high_temp;
    // ptr = &low_temp;

    // int score {100};
    // int* score_ptr {&score};

    // cout << *score_ptr <<endl;

    // *score_ptr = 200;

    // cout << *score_ptr <<endl;
    // cout << score <<endl;


    // vector<string> stooges {"Jow", "moe", "curly"};

    // vector<string> *vec = &stooges;

    // cout << (*vec)[0] << " " << (*vec).at(1) <<endl; // the dereference gives you the vector

    // for(auto x : *vec)
    //     cout << x << " ";



    //Dynamic memory allocation

    // int *int_ptr {nullptr};

    // int_ptr = new int;

    // cout << int_ptr <<endl; // some allocated address
    // cout << *int_ptr <<endl; // garbage value

    // *int_ptr = 100;

    // cout << *int_ptr <<endl;

    // delete int_ptr;

    // using new to allocate storage for an array

    // int *array_ptr {nullptr};

    // int sz {};

    // cout << "How big is the array? :";
    // cin >> sz;

    // array_ptr = new int[sz];

    // for(int i = 0; i < sz; i++)
    // {
    //     array_ptr[i] = i;
    // }

    // for(int i = 0; i < sz; i++)
    // {
    //     cout << array_ptr[i] << " ";
    // }

    // delete [] array_ptr;

    //Relationship between Arrays and pointers

    // int scores[] {100, 95, 89};
    // cout << scores <<endl; // prints address of 1st element
    // cout << *scores <<endl; // prints 100

    // int *score_ptr {scores}; // & not required since name of array evaluates to address of 1st element

    // cout << score_ptr <<endl; // prints addressof 1st element

    // cout << *score_ptr <<endl; // prints 100

    // int scores[] {100, 95, 89};
    // int *score_ptr {scores};

    // cout << score_ptr[0] << " " << score_ptr[1] << " " << score_ptr[2] <<endl; // since scores evaluates to address of 1st element and score_ptr too evaluates to address of 
    // // 1st element, indexing works on both array name and the pointer.
    // cout << *score_ptr << " " << *(score_ptr + 1) << " " << *(score_ptr + 2) << endl;
    // cout << score_ptr << " " << score_ptr + 1 << " " << score_ptr + 2 << endl;


    //Subscript and offset notation equivalence

    // int arr_name[] {1, 2, 3};

    // int *arr_ptr {arr_name};

    // cout << "Array subscript notation : " << arr_name[0] << " " << arr_name[1] << " " << arr_name[2] <<endl;

    // cout << "Array arithmetic notation : " << *arr_name << " " << *(arr_name + 1) << " " << *(arr_name + 2) <<endl;

    // cout << "Pointer subscript notation : " << arr_ptr[0] << " " << arr_ptr[1] << " " << arr_ptr[2] <<endl;

    // cout << "Pointer arithmetic notation : " << *arr_ptr << " " << *(arr_ptr + 1) << " " << *(arr_ptr + 2) <<endl;

    // cout << arr_name[1] << " " << *(arr_name + 1) <<endl;
    // cout << arr_ptr[1] << " " << *(arr_ptr + 1) <<endl; 

    /*
        array_name[index] == *(array_name + index)
        pointer_name[index] == *(pointer_name + index)
    */

   // pointer arithmetic

//    int scores[] {100, 95, 89, 68, -1};

//    int *score_ptr {scores};

//    while(*score_ptr != -1){
//        cout << *score_ptr << " ";
//        score_ptr++;

//        // or

//        // cout << *score_ptr++ << " ";
//    }

// char name[] {"Frank"};

// char *char_ptr1 {&name[0]};
// char *char_ptr2 {&name[3]};

// cout << char_ptr2 - char_ptr1 << endl; // gap between characters

    //const and pointers

    // There are several way to qualify pointers using const: pointers to constants, constant pointers, constant pointers to constants

    // pointers to constants

    // int high_score {100};
    // int low_score {65};

    // const int *score_ptr {&high_score}; // pointer to a const int

    // //*score_ptr = 98; // this is invalid since the pointer is pointing to a const int; compiler error

    // score_ptr = &low_score; // but the pointer itself can point to another location 

    // constant pointers - the data pointed to by the pointers can be changed but the location which the pointer points to cannot change (opposite of previous scenario)

    // int high_score {100};
    // int low_score {65};

    // int *const score_ptr {&high_score};

    // *score_ptr = 98;  // okay, data can change

    //score_ptr = &low_score; // not okay since its a constant pointer and the location it point to cannot be changed

    // const pointer to constants - both the data pointed to by the pointer  and the pointer itself cannot be change and point to somwhere else


    // int high_score {100};
    // int low_score {65};

    // const int *const score_ptr {&high_score};

    //*score_ptr = 98;  // not allowed! since its a const pointer to a const int

    //score_ptr = &low_score; // not allowed! since its a const pointer to a const int


    // passing pointers to functions

    // int value {10};

    // double_value(&value); // pass by reference with pointers

    // cout << value << endl;

    // int *value_ptr {&value};

    // double_value(value_ptr); // pass by reference with pointers

    // cout << value << endl;



    // vector<string> stooges {"Larry", "Moe", "Curly"};

    // display(&stooges);


    // int arr[] {100, 99, 98, 97, -1};

    // display(arr, -1);


    // Returnung a pointer from a function

    // int l1 {100};
    // int l2 {200};

    // cout << *largest_int(&l1, &l2) <<endl;


    // int *array_ptr {nullptr};
    // size_t sz = 5;

    // array_ptr = dynamic_create_array(sz, -1);

    // display_arr(array_ptr, sz);

    // delete [] array_ptr;


    // What is a reference?
    /*
    Reference is an alias for a variable. It cannot be null. Once initialized, it cannot be made to point to a different variable. Very useful as function parameters.
    Might be helpful to think reference as a constant pointer that is automatically dereferenced.
    */

   // using references in a range based for loop

   //vector<string> stooges {"Larry", "Moe", "Curly"};

//    for(auto str: stooges) 
//     str = "Funny"; // here we are not changing the stooges vector. Instead, we are changing the copy that is made internally. Changes the copy.

//    for(auto &str: stooges) // here str is a reference to each of C++ string objects. str is an alias for those objects. Here, we are actually changing the stooges vector 
//         str = "Funny"; 


    // for(auto const &str: stooges) // if we add const, we are preventing any change to the data in the vector since compiler marks it as read only
    //     str = "Funny"; 
   
//    for(auto const &str: stooges) // const can be used here as we dont intend to change the stooges vec here
//         cout << str <<endl;

    // int num {100};

    // int &ref {num};

    // cout << num << " " << ref <<endl; // 100 100

    // num = 200;

    // cout << num << " " << ref <<endl; // 200 200

    // ref = 300;

    // cout << num << " " << ref <<endl; // 300 300\

    // L and R values

    // l value is an object that occupies location in memory and is addressable

    // int x {100}; // x is an l value
    // x = 1000;

    // string name; // name is an l value
    // name = "Frank";

    /*
    100 = x; // 100 is not an l value
    (1000 + 20) = x; // (1000 + 20) is not an l value

    string name;
    name = "Frank";
    "Frank" = name; // "Frank" is not an l value
    */

   // r value - non -addressable and non assignable; a value that is not an l value, on right side of assignment expression, a temporary which is non-modifiable and non -addressable
    /*
   int x {100}; // 100 is an r value
   int y  = x+ 200;  // x + 20 is an r value

   string name;
    name = "Frank"; // Frank is an r value
    int max_num = max(20, 30); // max(20, 30) is an r value
    */

   // r values can be assigned to l values explicitly

//    int x {100};
//    int y {0}; 

//    y = 100; // r value 100 assigned to l value y
//    x = x + y; // r value x+y assigned to l value x

   // l value references - the references we have used till now are l value references because we are referencing l values

//    int x {100};
//    int &ref1 = x; // ref1 is a reference to l value
//    ref1 = 1000;

   // int &ref2 = 100; // error, since 100 is an r value, compiler generates error


    // int i {6};

    // while(i > 0)
    // {
    //     cout << i << " ";
    //     i--;
    // }


    // int a1 {100};
    // int a2 {200};
    // swap(&a1, &a2);
    // cout << a1 << " " << a2 <<endl;


    // pass by value

    /*
     When the function does not modify the actual parameterand the parameter is small and efficient to copy(int, char)
    */

   // pass by reference using a pointer
   /*
     When the function does modify the actual param, param is expensive to copy, its okay to the ptr is allowed to a nullptr value
   */

  // pass by reference using a pointer to const
   /*
     When the function does not modify the actual param, param is expensive to copy, its okay to the ptr is allowed to a nullptr value
   */

  // pass by reference using a const pointer to const
   /*
     When the function does not modify the actual param, param is expensive to copy, its okay to the ptr is allowed to a nullptr value, you dont want to modify the ptr itself
   */

  // pass by reference using reference
   /*
     When the function does modify the actual param, param is expensive to copy, param will never be nullptr value
   */

  // pass by reference using const reference
   /*
     When the function does not modify the actual param, param is expensive to copy, param will never be nullptr value
   */

  const size_t array1_sz {5};
  const size_t array2_sz {3};

  int arr1[] {1,2,3,4,5};
  int arr2[] {10, 20, 30};

  print(arr1, array1_sz);
  print(arr2, array2_sz);

  int *results = apply_all(arr1, array1_sz, arr2, array2_sz);

  print(results, array1_sz * array2_sz);

    return 0;
}

int* apply_all(int *arr1, size_t array1_sz, int *arr2, size_t array2_sz) {

    size_t res_sz = array1_sz * array2_sz;

    int *res = new int[res_sz];
    size_t i = 0;

    for(size_t j {0}; j < array2_sz; j++) {
        for(size_t k {0}; k < array1_sz; k++) {
        
            res[i++] = arr2[j] * arr1[k];
            
        }
        
    }
    return res;


}

void print(int *arr1_ptr, const size_t array1_sz) {
    for(size_t i {0}; i < array1_sz; i++)
    {
        cout << *(arr1_ptr + i) << " ";
    } 
    cout << endl;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void display_arr(const int *const arr_ptr, int sz) {

    for(size_t i {0}; i < sz; i++) {
        // cout << *arr_ptr << " ";
        // arr_ptr++;
        cout << arr_ptr[i] << " ";
    }
}

int* dynamic_create_array(size_t sz, int init_val) {
    int *arr_ptr = new int[sz];

    for(size_t i {0}; i < sz; i++)
    {
        //*(arr_ptr + i) = init_val;
        arr_ptr[i] = init_val;
    }
    return arr_ptr;
}

int* largest_int(int *l1_ptr, int *l2_ptr) {

    if(*l1_ptr > *l2_ptr)
        return l1_ptr;
    return l2_ptr;

}

void double_value(int *value_ptr) {
    *value_ptr *= 2;
}


void display(const vector<string> *const stooges_ptr) { // pointer to a constant vector
    //(*stooges_ptr).at(1) = "Rahul"; // not allowed since stooges_ptr is a poointer to a constant vector
    for(auto x: *stooges_ptr)
        cout << x << " ";
    
    //stooges_ptr = nullptr; // not allowed since stooges_ptr is a constant pointer to vector
    
}


void display(const int *arr, int sentinel) {

    while(*arr != -1) {
        cout << *arr << " ";
        arr++;
    }

}