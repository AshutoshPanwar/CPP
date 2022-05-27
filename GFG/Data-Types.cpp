#include<iostream>
using namespace std;
int main()
{
    // Declaring Variables
    int a=1;
    float b=2;
    double c=3;
    long long l=5;
    string d="gfgc";

    // Operations on variables
    float p = b/c;
    double q = b/a;
    int r = c/a;
    long long m = r + l;

    // Print Output
    cout << p << " " << q << " " << r <<" "<< m <<endl;
    
    cout << d << " " << d[3] << endl;

    return 0;
}