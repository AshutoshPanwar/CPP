#include <iostream>
using namespace std;

int main(){
	int num1, num2;

	cout << "Enter dividend: ";
	cin >>num1;
	cout << "Enter divisor: ";
	cin >> num2;

	cout << "Quotient = " << num1/num2 << endl;
	cout << "Remainder = " << num1%num2<<endl;
	return 0;
}