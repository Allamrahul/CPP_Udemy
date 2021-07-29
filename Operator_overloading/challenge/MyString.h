

#ifndef _MY_STRING_H
#define _MY_STRING_H

#include <ostream>
#include <istream>

class MyString {


    // friend non-member functions
    friend std::ostream& operator<<(std::ostream& os, const MyString& obj);
    friend std::istream& operator>>(std::istream& is, MyString& obj);
    /*
    friend bool operator==(const MyString& obj1, const MyString& obj2); // equals
    friend bool operator!=(const MyString& obj1, const MyString& obj2); // not equals
    friend bool operator>(const MyString& obj1, const MyString& obj2);  // greater
    friend bool operator<(const MyString& obj1, const MyString& obj2);  // lesser

    friend MyString operator-(const MyString& obj);         // make lower case
    friend MyString operator+(MyString& obj1, const MyString& obj2);    // concatenate
    friend MyString& operator+=(MyString& obj1, const MyString& obj2);   // concatenate
    friend MyString operator*(const MyString& obj1, int mul);   // s1 = s2 * 3
    friend MyString& operator*=(MyString& obj1, int mul);  // s1 *= 3
    friend MyString& operator++(MyString& obj1);        // preincrement make upper case
    friend MyString operator++(MyString& obj1, int);    // post increment make upper case
    */


    private:

    char *str;

    public:

        MyString();
        MyString(const char *s);
        MyString(const MyString &source); // copy constructor
        MyString(MyString &&source);        // Move constructor

        ~MyString();
        void display() const;
        int get_length() const;
        const char* get_str() const;

        MyString &operator=(const MyString &rhs);   // copy assignment
        MyString &operator=(MyString &&rhs);  // move assignment

        // operator overloading member methods

        bool operator==(const MyString& obj2); // equals
        bool operator!=(const MyString& obj2); // not equals
        bool operator>(const MyString& obj2);  // greater
        bool operator<(const MyString& obj2);  // lesser

        MyString operator-();         // make lower case
        MyString operator+(const MyString& obj2);    // concatenate
        MyString& operator+=(const MyString& obj2);   // concatenate
        MyString operator*(int mul);   // s1 = s2 * 3
        MyString& operator*=(int mul);  // s1 *= 3
        MyString& operator++();        // preincrement make upper case
        MyString operator++(int);    // post increment make upper case

};



#endif