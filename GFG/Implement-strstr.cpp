#include<iostream>
using namespace std;

int strstr(string s, string x)
{
    int index = s.find(x);
    return index;
}

int main()
{
    string str, key;
    cin >> str;
    cout << "Key : ";
    cin >> key;
    cout << strstr( str,  key);
    return 0;
}