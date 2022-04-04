#include <iostream>
using namespace std;

int main(){
	int num;
	float arr[100];
	cout << "Enter total number of elements(1 to 100): ";
	cin >> num;

	for (int i = 0; i < num; ++i)
	{
		cout << "Enter Number " << i+1 << " : " ;
		cin >> arr[i];
		if (arr[0] < arr[i])
		{
			arr[0] = arr[i];
		}
	}

	cout << "Largest element = " << arr[0];
	return 0;
}