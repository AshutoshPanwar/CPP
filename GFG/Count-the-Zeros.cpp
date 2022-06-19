#include<iostream>
using namespace std;
int main()
{
    int Arr[] = {0, 0, 0, 0, 0};
    int size = sizeof(Arr)/sizeof(Arr[0]);
    int zero = 0;
    for (int i = 0; i < size; i++)
    {
        if (Arr[i] == 0)
        {
            ++zero;
        }
        
    }
    cout << zero;
    return 0;
}