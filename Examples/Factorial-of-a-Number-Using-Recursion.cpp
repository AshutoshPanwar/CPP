#include <iostream>
using namespace std;

int factorail(int);

int main(){
	int num, result;
	cout << "Enter an positive integer: ";
	cin >> num;

	result = factorail(num);
	cout << "Factorial of " << num << " = " << result;
	return 0;
}

int factorail(int n){
	if (n > 1)
	{
		return n * factorail(n-1);
	}
	else{
    	return 1;
	}
}