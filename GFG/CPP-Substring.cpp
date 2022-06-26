#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter String: ";
    cin >> str;
    int l, r;
    cout << "Enter Starting index: ";
    cin >> l;
    cout << "Enter Ending index: ";
    cin >> r;
    for (int i = l; i <= r; i++)
    {
        cout << str[i];
    }
    
    return 0;
}