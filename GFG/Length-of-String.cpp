#include<iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    cout << str.length() << endl;
    cout << str.size() << endl;

    int i = 0;
    while (str[i])
    {
        ++i;
    }
    cout << i << endl;
    
    i = 0;
    for (i = 0; str[i]; i++)
        ;
    cout << i;
    return 0;
}