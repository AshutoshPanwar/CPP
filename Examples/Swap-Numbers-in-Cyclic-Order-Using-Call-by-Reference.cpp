#include <iostream>
using namespace std;

void cyclicSwap(int *a, int *b, int*c);

int main(){
	int a, b, c;
	cout << "Enter value of a, b and c respectively: ";
	cin >> a >>b >> c;

	cout << "Value before swapping: " << a << ", " << b << ", " << c << endl;

	cyclicSwap(&a, &b, &c);

	cout << "Value after swapping numbers in cycle: " << a << ", " << b << ", " << c << endl;


	return 0;
}

void cyclicSwap(int *a, int *b, int*c){
	int temp;
	temp = *b;
	*b = *a;
	*a = *c;
	*c = temp;
}