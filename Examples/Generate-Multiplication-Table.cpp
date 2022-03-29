#include <iostream>
using namespace std;

int main(){
	int num;
	cout << "Enter an integer: ";
	cin >> num;

	for (int i = 0; i < 11; ++i)
	{
		cout << num << " * " << i << " = " << num*i << endl;
	}
	return 0;
}