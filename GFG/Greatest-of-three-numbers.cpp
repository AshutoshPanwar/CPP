#include<iostream>
using namespace std;

void greatestOfThree(int x, int y, int z)
{
    if (x >= y && x >= z)       // First comparing first element with other elements
    {
        cout << x;
    }
    else if (y >= x && y >= z)  // Now comparing second element with other two if first conditioin is false
    {
        cout << y;
    }
    else{
        cout << z;              // Only possible case left
    }
}

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    greatestOfThree(x, y, z);
    return 0;
}