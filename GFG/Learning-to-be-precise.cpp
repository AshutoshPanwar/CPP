#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a = 5.43, b = 2.653;
    float result = a/b;
    cout << result << endl;
    cout << setprecision(3) << fixed << result;     // fixed is used to get exect value
    return 0;
}