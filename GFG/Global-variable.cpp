#include<iostream>
using namespace std;

// Gloabal Variable
int gloabal = 5;

int main()
{
    cout << gloabal << endl;
    // Local variable
    gloabal = 2;

    cout << gloabal << endl;
    return 0;
}