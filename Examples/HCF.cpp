#include <iostream>
using namespace std;

int main(){
	int n1, n2, temp, hcf;
	cout << "Enter two numbers: ";
	cin >> n1 >> n2;

	if(n2 > n1){
		temp = n2;
		n2 = n1;
		n1 = temp;
	}

	for (int i = 0; i < n1; ++i)
	{
		if (n1%i == 0 && n2%i == 0)
		{
			hcf = i;
		}
	}

	cout << "HCF: " << hcf << endl;
	return 0;
}