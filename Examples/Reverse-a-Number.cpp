#include <iostream>
using namespace std;

int main(){
	int num, remainder, reversed_number = 0;
	cout << "Enter an integer: ";
	cin >> num;

	while (num != 0){
		remainder = num % 10;
		reversed_number = reversed_number * 10 + remainder;
		num /= 10;
	}

	cout << "Reversed number: " << reversed_number;
	return 0;
}