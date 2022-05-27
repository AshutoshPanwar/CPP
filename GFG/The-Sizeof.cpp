#include<iostream>
using namespace std;
int main()
{
    int a = 1;
    float b = 2;
    double c = 3;
    long long l = 5;
    string d = "gfgc";

    float p = b/c;
    double q = b/a;
    int r = c/a;
    long long m = r + l;

    // Print Output Size of variables
    cout << sizeof(p) << " " << sizeof(q) << " " << sizeof(r) <<" "<< sizeof(m) <<endl;
    
    cout << sizeof(d) << " " << sizeof(d[3]) << endl;
    return 0;
}