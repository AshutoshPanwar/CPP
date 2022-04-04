#include <iostream>
using namespace std;

int main(){
	int num, sum=0;
	cout << "Enter the numbers of data: ";
	cin >> num;
	float arr[num];
	for (int i = 0; i < num; ++i)
	{
		cout << i+1 << ". Enter number: ";
		cin >> arr[i];
		sum += arr[i];
	}

	cout << "Average = " << sum/num;
	return 0;
}