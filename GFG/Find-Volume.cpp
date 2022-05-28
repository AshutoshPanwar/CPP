#include<iostream>
using namespace std;

void Volume(int n){
    cout << n*n*n << endl;
}

void Volume(int a, int b, int c){
    cout << a*b*c;
}

int main()
{
    int a=1, b=2, c=3;
    Volume(b);
    Volume(a, b, c);            // Function overloading
    return 0;
}