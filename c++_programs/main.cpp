#include <iostream>
#include <string>
//#include "query.h"

using namespace std;

void query(string prompt, string& ans);

int main()
{
    string input = "";
    
    while(input != "exit")
    {
        query("Please enter the password: ", input);
        if(input == "linuxrocks")
        {
            cout << "Welcome!" << endl;
            break;
        }
        else
            cout << "Nope. Try again." << endl;
    }

    return 0;
}