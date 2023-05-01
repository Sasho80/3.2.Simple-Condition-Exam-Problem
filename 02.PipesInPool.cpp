#include <iostream>
#include <math.h>
using namespace std;
int main() {
	double volume;
	int pipe1;
	int pipe2;
	double hours;
	cin >> volume;
	cin >> pipe1;
	cin >> pipe2;
	cin >> hours;
	double water= pipe1 * hours + pipe2 * hours;
	if (water <= volume) {
		double pipe1Perscent = trunc((pipe1 * hours / water)*100);
		double pipe2Perscent = trunc((pipe2 * hours / water)*100);
		double sumPercent = trunc((water / volume)*100);
		cout << "The pool is " << sumPercent << "% full. Pipe 1:" <<
			pipe1Perscent << "%. Pipe 2:" << pipe2Perscent << "%." << endl;
	}
	else
	{
		double diffrence = water - volume;
		cout << "For " << hours << " hours the pool overflow with " <<
			diffrence << " liters." <<endl;
	}
	return 0;
}