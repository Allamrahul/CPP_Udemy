

#ifndef _My_String_H
#define _My_String_H

#include <ostream>
#include <istream>

class MyString {

    friend bool operator==(const MyString &lhs, const MyString &rhs);
    friend MyString operator-(const MyString &obj);
    friend MyString operator+(const MyString &lhs, const MyString &rhs);
    friend std::ostream& operator<<(std::ostream& os, const MyString& obj);
    friend std::istream& operator>>(std::istream& is, MyString& obj);

    private:
        char *str;

    public:

        MyString();
        MyString(const char *s);
        MyString(const MyString &source); // copy constructor
        MyString(MyString &&source);        // MOve constructor

        ~MyString();
        void display() const;
        int get_length() const;
        const char* get_str() const;

        MyString &operator=(const MyString &rhs);   // copy assignment
        MyString &operator=(MyString &&rhs);  // move assignment

        // operator overloading

        // MyString operator-() const; // overloading unary operator

        // bool operator==(const MyString& rhs) const;     // overloading binary operators

        // MyString operator+(const MyString& rhs) const;

};

#endif