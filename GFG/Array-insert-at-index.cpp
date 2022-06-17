#include<iostream>
using namespace std;
int main()
{
    int arr[50], size, pos, elem;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter element to be inserted: ";
    cin >> elem;
    cout << "Enter position at which element to be inserted: ";
    cin >> pos;

    for (int i = size; i >= pos; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = elem;
    ++size;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}