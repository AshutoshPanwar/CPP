#include<iostream>
using namespace std;

string character_at_even_index(string str)
{
    string new_str = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (i % 2 == 0)
        {
            new_str += str[i];
        }
    }
    return new_str;
}

int main()
{
    string str;
    getline(cin, str);
    cout << character_at_even_index(str);
    return 0;
}