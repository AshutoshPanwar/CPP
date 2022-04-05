#include <iostream>
using namespace std;

struct  student
{
	char name[150];
	int roll_no;
	float marks;
};

int main(){
	student s;
	cout << "Enter information," << endl;
	cout << "Enter name: ";
	cin >> s.name;
	cout << "Enter roll number: ";
	cin >> s.roll_no;
	cout << "Enter marks:";
	cin >> s.marks;

	cout << "Displaying Information," << endl;
	cout << "Name: " << s.name << endl;
	cout << "Roll: " << s.roll_no << endl;
	cout << "Marks: " << s.marks << endl;
	return 0;
}