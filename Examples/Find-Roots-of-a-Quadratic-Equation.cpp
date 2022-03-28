#include<iostream>
#include<cmath>
using namespace std;

int main(){
	float a, b, c, discriminant, root1, root2, real, img;
	cout << "Enter Coefficinets a, b, c: ";
	cin >> a >> b >> c;
	discriminant = b*b - 4*a*c;
	cout << discriminant << endl;

	if (discriminant > 0)
	{
		root1 = (-b + sqrt(discriminant)) / (2*a);
		root2 = (-b - sqrt(discriminant)) / (2*a);
		cout << "Roots are real and different."<< endl;
		cout << "Root1 = " << root1<< endl;
		cout << "Root2 = " << root2<< endl;
	}else if (discriminant == 0)
	{
		root1 = -b / (2 * a);
		cout << "Roots are real and equal." << endl;
		cout << "Root1 = Root2 = " << root1 << endl;
	}else{
		real = -b / (2 * a);
		img = sqrt(-discriminant) / (2 * a);
		cout << "Roots are complex and different."<< endl;
		cout << "Root1 = " << real << " + " << img << "i" << endl;
		cout << "Root2 = " << real << " - " << img << "i" << endl;
	}
	return 0;
}