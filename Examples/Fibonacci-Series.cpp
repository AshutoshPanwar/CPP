#include <iostream>
using namespace std;

int main(){
	int num, F1 = 0, F2 = 1, nexTerm = 0;
	cout << "Enter the number of terms: ";
	cin >> num;

	cout << "Fibonacci Series: " << F1 << ", " << F2 << ", ";
	nexTerm = F1 + F2;
	
	while(nexTerm <= num){
		cout << nexTerm << ", ";
		F1 = F2;
		F2 = nexTerm;
		nexTerm = F1 + F2;
		
	}
	return 0;
}