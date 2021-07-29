#include<vector>
#include<string>

using std::string;
using std::vector;
using std::cout;

class student {

private:
    int age;
    string name;
    vector<string> courses;

public:
    int get_age();
    void set_age(int age);

    void set_name(string name);
    string get_name();

    bool course_register(vector<string>& course_vec);
    vector<string> get_courses();

};

int student::get_age(){
    return age;
}

void student::set_age(int age){
    this->age = age;
}

void student::set_name(string name){
    this->name = name;
}

string student::get_name(){
    return name;
}

bool student::course_register(vector<string>& course_vec){

    if(course_vec.size() == 0)
        return 0;

    for(auto c : course_vec)
    {
        courses.push_back(c);
    }
    return 1;
}

vector<string> student::get_courses(){
    return courses;
}
