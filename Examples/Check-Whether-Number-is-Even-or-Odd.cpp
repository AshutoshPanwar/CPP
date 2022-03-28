#include<iostream>
using namespace std;

int main(){
	int num;
	cout << "Enter an integer: ";
	cin >> num;

	// if..else
	if (num%2 == 0)
	{
		cout << num << " is even!" << endl;
	}else{
		cout << num << " is odd!" << endl;
	}

	// Ternary Operators
	// (num%2 == 0) ? cout << num << " is even!" << endl : cout << num << " is odd!" << endl;

	return 0;
}