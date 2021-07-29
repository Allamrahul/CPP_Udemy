#include <iostream>
#include<vector>
#include<string>
#include <cctype>
#include <cstring> // for c style string functions
#include <cstdlib> // for character based functions
#include <cmath>
#include <stack>

using std::string;
using std::vector;
using std::cout; 
using std::cin; 
using std::endl;

int fact(int n);
int precedence(char op);
string infix_to_postfix(char *str);
string evaluate_expression(string &postfix);

int main(int argc, char *argv[]) {

    
    //**********************************************WPI Assignment 0:*******************************************************

    /*
        *** 1. write a program that gets a positive integer number from the command line, calculates the factorial of the number, and prints it on the screen ***
    */

    // int number_i = *argv[1] - '0';

    // cout << "Factorial of " << number_i << " is " << fact(number_i);


    /*
        *** 2. write a program that gets a string from the command line, and prints “yes” if the string has the letter “x” in it, and prints “no” otherwise. ***
    */

   
    //    bool x_present {false};
    
    //    for(size_t i {0}; i < strlen(argv[1]); i++) 
    //     {
    //         if(argv[1][i] == 'x') { 
    //             x_present = true;
    //             break;
    //         }
    //     }
    //     cout << std::boolalpha;
    //     cout << " Does String " << argv[1] << " have character x? " << x_present <<endl; 

    /*
        *** 3. write a simple calculator program that parses arithmetic expressions such as “(3+2)*6” and returns the result. ***
    */

    string postfix = infix_to_postfix(argv[1]);
    cout << evaluate_expression(postfix) <<endl;

   // Evaluate the expression

    return 0;
}

string evaluate_expression(string &postfix) {

}

string infix_to_postfix(char *str)
{
    std::stack<char> S;
    string postfix {};
    size_t len = strlen(str);

   // convert infix to postfix

    for(size_t i {0}; i < len; i++) {
        char c = str[i];
        if(isalnum(c))
            postfix.push_back(c);
        else if(c == '(')
            S.push(c);
        else if(c == ')') {
            while(S.top() != '(')
            {
                postfix.push_back(S.top());
                S.pop();
            }
            S.pop(); //  popping the opening bracket
        }
        else
        {
            while(!S.empty() && precedence(S.top()) >= precedence(c))
            {
                postfix.push_back(S.top());
                S.pop();
            }
            S.push(c);
            
        }

    }

    while(!S.empty())       // appending the left out chanracters in stack to the output string
    {
        postfix.push_back(S.top());
        S.pop();
    }

    return postfix;

}

int precedence(char op) {

    switch(op) {
        case '^':
        { 
            return 3;
            break;
        }
        case '*':
        case '/':
            return 2;
        case '+':
        case '-':
            return 1;
        default:
            return 0;
    }
}

int fact(int n) {

    if(n == 1) return 1;

    return n * fact(n-1);
}