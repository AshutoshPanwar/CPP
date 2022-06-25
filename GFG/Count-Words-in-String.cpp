#include<iostream>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int space = 0;
    int size = str.length();
    for (int i = 0; i < size; i++)
    {
        if (str[i] == ' ')
        {
            ++space;
        }
    }
    cout << space+1;
    return 0;
}