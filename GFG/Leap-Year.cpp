#include<iostream>
using namespace std;

bool LeapYear(int year)
{
    if (year % 4 == 0 && year % 100 != 0)
    {
        return true;
    }
    else if (year % 400 == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    int year;
    cin >> year;
    LeapYear(year) ? cout << "Leap Year" : cout << "Not a Lear Year";
    return 0;
}