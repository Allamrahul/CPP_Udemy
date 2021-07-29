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


/*


MyString operator-(const MyString& obj) {
    
    char *buff = new char[std::strlen(obj.str)+1];

    std::strcpy(buff, obj.str);

    for(size_t i = 0; i < std::strlen(obj.str); i++)
    {
        buff[i] = std::tolower(buff[i]);
    }

    MyString temp {buff};

    delete [] buff;

    return temp;
}


bool operator==(const MyString& obj1, const MyString& obj2) {

    return (std::strcmp(obj1.str, obj2.str) == 0);
}

bool operator!=(const MyString& obj1, const MyString& obj2) {

    return (std::strcmp(obj1.str, obj2.str) != 0);
}

bool operator>(const MyString& obj1, const MyString& obj2) {

    return (std::strcmp(obj1.str, obj2.str) > 0);
}

bool operator<(const MyString& obj1, const MyString& obj2) {

    return (std::strcmp(obj1.str, obj2.str) < 0);
}

MyString operator+(MyString& obj1, const MyString& obj2) {

    char *buff = new char [std::strlen(obj1.str) + std::strlen(obj2.str) + 1];

    std::strcpy(buff, obj1.str);

    std::strcat(buff, obj2.str);

    MyString temp {buff};

    delete [] buff;

    return temp;

}

MyString& operator+=(MyString& obj1, const MyString& obj2) {

    //std::strcat(obj1.str, obj2.str);

    obj1 = obj1 + obj2;
    return obj1;

}

MyString operator*(const MyString& obj1, int mul) {

    MyString temp;
    for(size_t i {0}; i < mul; i++) {
        temp = temp + obj1;
    }

    return temp;

   
}


MyString& operator*=(MyString& obj1, int mul) {

    obj1 = obj1 * mul;
    return obj1;
   
}

MyString& operator++(MyString& obj1) {          // uppercase preincrement

    for(size_t i {0}; i < std::strlen(obj1.str); i++) {
        obj1.str[i] = std::toupper(obj1.str[i]);
    }

    return obj1;

}

MyString operator++(MyString& obj1, int) {      // uppercase postincrement

    MyString temp {obj1};

    ++obj1;

    return temp;

}

*/


// operator overloading member functions


bool MyString::operator==(const MyString& obj2) // equals
{
    return (std::strcmp(this->str, obj2.str) == 0);
}
bool MyString::operator!=(const MyString& obj2) // not equals
{
    return !(std::strcmp(this->str, obj2.str) == 0);
}
bool MyString::operator>(const MyString& obj2)  // greater
{
    return (std::strcmp(this->str, obj2.str) > 0);
}
bool MyString::operator<(const MyString& obj2)  // lesser
{
    return (std::strcmp(this->str, obj2.str) < 0);
}

MyString MyString::operator-()         // make lower case
{
    char *buff = new char [std::strlen(this->str)+1];

    std::strcpy(buff, this->str);

    for(size_t i {0}; i < std::strlen(this->str); i++) {
        buff[i] = std::tolower(buff[i]);
    }

    MyString temp {buff};
    delete [] buff;

    return temp;


}
MyString MyString::operator+(const MyString& obj2)   // concatenate
{
    size_t len  = std::strlen(this->str) + std::strlen(obj2.str) + 1;

    char *buff = new char [len];

    std::strcpy(buff, this->str);
    std::strcat(buff, obj2.str);

    MyString temp {buff};

    delete [] buff;
    
    return temp;
}
MyString& MyString::operator+=(const MyString& obj2)   // concatenate
{
    *this = *this + obj2;
    return *this;
}
MyString MyString::operator*(int mul)   // s1 = s2 * 3
{
    MyString temp;

    for(size_t i {0}; i < mul; i++) {
        temp += *this;
    }
    return temp;
}

MyString& MyString::operator*=(int mul)  // s1 *= 3
{
    *this = *this * mul;

    return *this;
}
MyString& MyString::operator++()       // preincrement make upper case
{

    for(size_t i {0}; i < std::strlen(this->str); i++) {
        this->str[i] = std::toupper(this->str[i]);
    }

    return *this;
}

MyString MyString::operator++(int)    // post increment make upper case
{
    MyString temp = *this;

    ++(*this);

    return temp;
}