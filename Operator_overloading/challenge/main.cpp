#include <iostream>
#include<vector>
#include<string>
#include <cctype>
#include <cstring> // for c style string functions
#include <cstdlib> // for character based functions
#include <cmath>
#include <stack>

#include "MyString.h"

using std::string;
using std::vector;
using std::cout; 
using std::cin; 
using std::endl;


int main() {

    // MyString a {"frank"};
    // MyString b {"frank"};

    // cout << (a==b) <<endl;
    // cout << (a!=b) <<endl;

    // b = "george";

    // cout << (a==b) <<endl;
    // cout << (a!=b) <<endl;

    // cout << (a>b) <<endl;
    // cout << (a<b) <<endl;


    MyString s1 {"FRANK"};

    s1 = -s1;

    cout << s1 <<endl;

    s1 = s1 + "********";
    cout << s1 <<endl;

    s1 += "-------";
    cout << s1 <<endl;

    MyString s2 {"12345"};
    s1 = s2 * 3;
    cout << s1 <<endl;

    MyString s3 {"abcdef"};
    s3 *= 5;
    cout << s3 <<endl; 

    MyString s = "Frank";
    ++s;
    cout << s <<endl;

    s = -s;
    cout << s << endl;

    MyString result;
    result = ++s;
    cout << s <<endl;
    cout << result <<endl;

    s = "Frank";
    s++;
    cout << s <<endl;


    s = -s;
    cout << s <<endl;

    result = s++;
    cout << s <<endl;
    cout << result <<endl;
    
    return 0;

}