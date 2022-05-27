#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    auto x = 4;         // Compiler automatically deteacts type of variable
    auto y = 3.14;      // Same for this

    cout << typeid(x).name() << " " << typeid(y).name() << endl;
    return 0;
}