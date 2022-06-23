#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int point = str.find('@');
    // Naive approch
    // for (int i = 0; i < point; i++)
    // {
    //     cout << str[i];
    // }

    string sub = str.substr(0, point);
    cout << sub << endl;
    return 0;
}