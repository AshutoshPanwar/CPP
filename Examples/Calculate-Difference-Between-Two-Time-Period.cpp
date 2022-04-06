#include <iostream>
using namespace std;

struct Time{
	int hour, min, sec;
};

void computeTimeDifference(struct Time, struct Time, struct Time *);

int main(){
	struct Time T1, T2, difference;
	cout << "Enter hours, minutes and seconds respectively: ";
	cin >> T1.hour >> T1.min >> T1.sec;
	cout << endl;
	cout << "Enter stop time.";
	cout << endl;
	cout << "Enter hours, minutes and seconds respectively: ";
	cin >> T2.hour >> T2.min >> T2.sec;
	computeTimeDifference(T1, T2, &difference);
	cout << "TIME DIFFERENCE: " << T1.hour << ":" << T1.min << ":" << T1.sec << " - " << T2.hour <<":" << T2.min << ":" << T2.sec << " = " << difference.hour << ":" << difference.min <<":" << difference.sec<< endl;
	return 0;
}

void computeTimeDifference(struct Time T1, struct Time T2, struct Time *difference){
	if (T2.sec > T1.sec)
	{
		--T1.min;
		T1.sec += 60;
	}
	difference-> sec = T1.sec - T2.sec;
	if (T2.min > T1.min)	
	{
		--T1.hour;
		T1.min += 60;
	}
	difference-> min = T1.min - T2.min;
	difference-> hour = T1.hour - T2.hour;
}