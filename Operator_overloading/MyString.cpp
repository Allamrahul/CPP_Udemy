#include "MyString.h"
#include <cstring>
#include <iostream>


MyString::MyString() : str {nullptr} {
    str = new char[1];
    *str = '\0';
}

MyString::MyString(const char *s) : str {nullptr} {
    
    if(s == nullptr) {
        str = new char[1];
        *str = '\0';
    }
    else {
        str = new char[std::strlen(s)+1];
        std::strcpy(str, s);
    }

}
MyString::MyString(const MyString &source) : str {nullptr}
{
    str = new char[std::strlen(source.str) + 1];    // Deep copy
    std::strcpy(str ,source.str);

}

MyString::MyString(MyString &&source) : str {source.str}
{
    source.str = nullptr;
    std::cout << "Move constructor used \n";
}

MyString::~MyString() {
    delete [] str;
}
void MyString::display() const {
    std::cout << str << ":" << get_length() << std::endl;
}

int MyString::get_length() const {
    return std::strlen(str);
}

const char* MyString::get_str() const {
    return str;
}

 
MyString& MyString::operator=(const MyString &rhs) {

    std::cout << "Copy assignment \n";

    if(this == &rhs)
        return *this;
    
    delete [] str;

    str = new char[std::strlen(rhs.str) + 1];       // deep copy
    std::strcpy(str ,rhs.str);

    return *this;       // returning the current by reference to allow chain assignment
}


MyString &MyString::operator=(MyString &&rhs) {

    std::cout << "Using Move assignment \n";

    if(this == &rhs)
        return *this;
    
    delete [] str;

    str = rhs.str;  // steal the pointer, not deep copy
    rhs.str = nullptr;  // nullout the rhs object

    return *this;   // return the current object
}

// MyString MyString::operator-() const {

//     char *buff = new char[std::strlen(str) + 1];

//     std::strcpy(buff, str);

//     for(size_t i {0}; i < std::strlen(buff); i++)
//     {
//         buff[i] = std::tolower(buff[i]);
//     }

//     MyString temp {buff};

//     delete [] buff;

//     return temp;

// }


// bool MyString::operator==(const MyString& rhs) const {

//     return (!std::strcmp(str, rhs.str))? 1 : 0;

// }


// MyString MyString::operator+(const MyString& rhs) const {

//     char *buff = new char[std::strlen(str) + std::strlen(rhs.str) + 1];

//     std::strcpy(buff ,str);

//     std::strcat(buff, rhs.str);

//     MyString temp = buff;

//     delete [] buff;

//     return temp;


// }


bool operator==(const MyString &lhs, const MyString &rhs) {
    if(std::strcmp(lhs.str, rhs.str) == 0)
        return 1;
    return 0;
}
MyString operator-(const MyString &obj) {
    char *buf = new char[std::strlen(obj.str) + 1];

    std::strcpy(buf, obj.str);

    for(size_t i {0}; i < std::strlen(obj.str); i++)
        buf[i] = std::tolower(buf[i]);
    
    MyString temp = buf;

    delete [] buf;
    return temp;
}


MyString operator+(const MyString &lhs, const MyString &rhs) {
    char *buf = new char[std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(buf, lhs.str);
    std::strcat(buf, rhs.str);

    MyString temp = buf;

    delete [] buf;
    return temp;
}


std::ostream& operator<<(std::ostream& os, const MyString& obj) {
    os << obj.get_str();
    return os;
}

std::istream& operator>>(std::istream& is, MyString& obj) { // return a reference to the istream so that we can keep inserting, update the object passed in

    char *buff = new char[1000];

    //obj = MyString {buff};

    is >> buff;

    obj = MyString {buff};

    delete [] buff;

    return is;

}