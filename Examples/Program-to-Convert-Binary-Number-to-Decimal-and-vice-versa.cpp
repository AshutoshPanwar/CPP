#include <iostream>
using namespace std;

int decimal(int);

int main(){
	int num;
	cout << "Enter a decimal number: ";
	cin >> num;

	cout << num << " in decimal = " << decimal(num) << " in binary";
	return 0;
}

int decimal(int n){
	long long bin = 0;
	int rem, i = 1;

	while(n != 0){
		rem = n % 2;
		n /= 2;
		bin += rem * i;
		i *= 10;
	}

	return bin;
}