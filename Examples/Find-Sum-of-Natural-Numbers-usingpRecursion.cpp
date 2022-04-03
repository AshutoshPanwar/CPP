#include <iostream>
using namespace std;

int add(int);

int main(){
	int num, result;
	cout << "Enter an positive integer: ";
	cin >> num;

	result = add(num);
	cout << "Sum = " << result;
	return 0;
}

int add(int n){
	if (n != 0)
	{
		return n = n + add(n-1);
	}
	return 0;
}