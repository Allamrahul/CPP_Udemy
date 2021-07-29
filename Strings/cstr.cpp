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
    //Testing characters
    //isalpha(), isalnum(), isdigit(), islower(), isupper(), isspace(), ispunct()
    //tolower(), toupper()

    //C Style strings(Referred to as zero or null terminated strings) - 
        // sequence of characters stored contiguously in memory, implemented as array of characters, terminated by a null character
        //string literals - sequence of characters in double quotes, constant and terminated with null character
    /*
    char my_name[] {"Frank"};

    //my_name = "Rahul"; // this is not allowed because both myname and string literal evlauate to two addresses and you cant equate them
    strcpy(my_name, "Rahul");
    strcat(my_name, "Rishi");

    cout << strlen(my_name) << endl;
    
    cout << strcmp(my_name, "Another") << endl;

    cout << my_name <<endl;
*/

    char first_name[20] {};
    char last_name[20] {};

    char full_name[50] {};

    char temp[50] {};

    //cout << first_name <<endl;

    // cout << "Please enter your first name: ";
    // cin >> first_name;

    // cout << "\n Please enter your last name: ";
    // cin >> last_name;

    // cout << "Hello " << first_name << "! Your first name has " << strlen(first_name) 
    // << " characters and your last name " << last_name << " has " << strlen(last_name) << " characters\n";

    // strcpy(full_name , first_name);
    // strcat(full_name, " ");
    // strcat(full_name, last_name);

    // cout << "Your full name is " << full_name << endl;


    cout << "Enter full name: ";
    //cin >> full_name; // // this will only read Rahul and not Allam. Stops at space
    cin.getline(full_name, 50); // 50 is the max characters we are going to read. Stops either at 50 or when the user presses enter

    cout << "\nYour full name is " << full_name <<endl; 

    strcpy(temp, full_name);

    if(strcmp(temp, full_name) == 0)
        cout << temp << " and " << full_name << " are same \n";
    else
        cout << temp << " and " << full_name << " are different \n";
    

    for(size_t i {0}; i < strlen(full_name); i++) {

        if(islower(full_name[i]))
            full_name[i] = toupper(full_name[i]);
    }

    cout << "Full name in capitals : " << full_name << endl;

    return 0;
}