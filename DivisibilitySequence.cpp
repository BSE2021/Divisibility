// DivisibilitySequence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int a, b, result;
    int i;

    cout << "\n Enter the inital value : \t";
    cin >> a;

    cout << "\n Enter the final value : \t";
    cin >> b;


    for (i = a; i < b; i++) {

        // cout << "\n Enter a number to check if it is even or odd \t ";
        // cin >> b;

        if (i % 2 == 0) {
            cout << "\t" << i << ",";
        }
        /*
        else {
            cout << "\n " << i << " is odd";
        }
        */
    }

}

