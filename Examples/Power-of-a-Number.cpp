#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float n1, n2, result;
	cout <<"Enter base and exponent respectively: " ;
	cin >> n1 >> n2;

	result = pow(n1, n2);

	cout << n1 << "^" << n2 << " = " << result;
	return 0;
}