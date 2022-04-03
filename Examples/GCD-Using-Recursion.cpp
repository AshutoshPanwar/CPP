#include <iostream>
using namespace std;

int hcf(int, int);

int main(){
	int num1, num2, result;
	cout << "Enter two positive integers: ";
	cin >> num1 >> num2;

	result = hcf(num1, num2);

	cout << "H.C.F of " << num1 << " & " <<  num2 << " is: " << result;

	return 0;
}

int hcf(int n1, int n2){
	if (n2 != 0)
	{
		return hcf(n2, n1 % n2);
	}else{
		return n1;
	}
}