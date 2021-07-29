#include <iostream>
#include<vector>
#include<string>

#include "helloworld.h"


int main()
{
    student s1;
    s1.set_age(25);
    s1.set_name("Rahul");
    vector<string> courses {"RD105", "RBE 100"};

    cout << "My name is " << s1.get_name() << " and I am " << s1.get_age() << " years old";
    cout << s1.get_name() << " has registered for courses: ";

    if(s1.course_register(courses))
    {
        for(auto x : s1.get_courses())
            cout << x << " ";
    }



    
}