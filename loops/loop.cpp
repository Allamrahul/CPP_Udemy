#include <iostream>
#include<vector>
#include<string>

using std::string;
using std::vector;
using std::cout; 
using std::endl;

int main()
{
    /*======================== SWITCH STATEMENT =============================*/
    /*
    enum color {red, green, blue, yellow};

    color screen_color {yellow};

    cout << screen_color << endl;

    switch (screen_color)
    {
        case red:
            cout << "RED\n";
            break;
        case green:
            cout << "GREEN\n";
            break;
        case yellow:
        case blue:
            cout << "BLUE || YELLOW\n";
            break;
        
        default:
            cout << "NONE\n";
            break;
    }
*/

    /*======================== LOOPS =============================*/

    // for(int i {1}, j {5}; i <= 5; i++, j++){
    //     cout << i * j << endl;
    // }

    // range based for loop

    // int scores [] {10, 20, 30};

    // for(int score: scores){
    //     cout << score  << " " << endl;
    // } 

    // for(auto c: "string")
    //     cout << c << " ";

    vector<vector<int>> vec_2d {
        {1, 2, 3},
        {10, 20, 30 ,40},
        {100, 200, 300, 400, 500}
    };

    for(vector<int> vec : vec_2d){
        for(int num : vec)
            cout << num << " ";
        cout <<"\n";
    }

}