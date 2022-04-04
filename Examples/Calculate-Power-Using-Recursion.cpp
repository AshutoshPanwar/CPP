#include <iostream>
using namespace std;

int calculatePow(int n, int p);

int main(){
	int num, pow;
	cout << "Enter base number: ";
	cin >> num;
	cout << "Enter power number(positive integer): ";
	cin >> pow;

	cout << num << "^" << pow << " = " << calculatePow(num, pow);
	return 0;
}

int calculatePow(int n, int p){
	if (p != 0)	
	{
		return (n*calculatePow(n, p -1));
	}else{
		return 1;
	}
	
}