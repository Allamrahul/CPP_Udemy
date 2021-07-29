#include <iostream>
#include<vector>
#include<string>

using std::string;
using std::vector;
using std::cout; 
using std::cin; 
using std::endl;

#include <cctype>
#include <cstring> // for c style string functions
#include <cstdlib> // for character based functions

int main()
{
    // cpp strings: dynamic, can shrink and grow at run time, stored in contiguous memory locations
    cout << "This is cpp strings code \n";

    // string s1;
    // string s2 {"Rahul"};
    // string s3 {s2};

    // string s4 {"Rahul", 3};

    // string s5 {s3, 0, 2};

    // string s6 (3, 'X');

    // string s7;
    // s7 = "C++ rocks!";

    // // concatenation

    // string p1 {"c++"};
    // string p2 {" is powerful!"};

    // string sentence;

    // sentence = p1 + " " + p2 + " language"; // this works. concatenation of C literals and cPP strings is fine.

    // //sentence = "C++ " + " is powerful"; // invalid, concatenation of two C literals is invalid

    // cout << sentence[0] << " " << sentence.at(1);

    // sentence[2] = 'f';

    // string s1 {"Frank"};

    // for(int c: s1)
    //     cout << c;
    

    // s1 = "Apple";

    // string s2 {"banana"};

    // string s3 {"kiwi"};

    // string s4 {"Apple"};

    // string s5 {s1};

    // cout << (s1 == s5) << " " << (s1 == s2) << " " << (s1 == "Apple") << " " << (s1 < s2) << endl;

    //string s1 {"This is a test"};

    // cout << s1.substr(0,4);
    // cout << s1.substr(5, 2);

    // cout << s1.find("This") << endl;
    // cout << s1.find("is") <<endl;
    // cout << s1.find("is", 4) <<endl;
    // cout << s1.find("XX") <<endl;

    // cout << s1.erase(0, 5) << endl;
    // cout << s1.erase(5,4) << endl;
    // //cout << s1.clear() << endl;
    // s1.clear();
    // cout << s1;

    //cout << s1.length() <<endl;

    //string s1;

    // cin >> s1;
    // cout << s1 <<endl;

    // getline(cin, s1);
    // cout << s1 <<endl;

    // getline(cin, s1, 'x');
    // cout << s1 <<endl;

    // string s1 {"Apple"};

    // for(size_t i {0}; i < s1.length(); i++)
    //     cout << s1.at(i);


    string s1 {"Secret word is Boo"};

    string word;

    cout << "Enter a word: ";
    cin >> word;

    size_t pos = s1.find(word);

    if(pos != string::npos)
        cout << "Found word at position " << pos <<endl;
    else
        cout << "Not found! \n";
    

    return 0;

}