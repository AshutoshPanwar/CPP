#include <iostream>
using namespace std;

int main(){
	int num1, num2, max=0;
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;

	max = (num1 > num2) ? num1 : num2;

	for (int k = max; k <= num1*num2; ++k)
	{
		if (k % num1 == 0 && k % num2 == 0)
		{
			cout << "LCM = " << k << endl;
            break;
		}
	}

	return 0;
}