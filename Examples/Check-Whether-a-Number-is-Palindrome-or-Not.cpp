#include <iostream>
using namespace std;

int main(){
	int num, out, digit, rev=0;
	cout << "Enter a positive number: ";
	cin >> num;
	out = num;
	while(num != 0){
		digit = num % 10;
		rev = (rev * 10) + digit;
		num = num / 10;
	};

	cout << "The reverse of the number is: " << rev << endl;

	if (out == rev)		
	{
		cout << "The number is a palindrome." << endl;
	}else{
		cout << "The number is not a palindrome." << endl;
	}

	return 0;
}