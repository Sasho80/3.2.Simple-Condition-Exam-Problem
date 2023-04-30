#include <iostream>
#include <string>
using namespace std;
int main() {
	int distance;
	string dayOrNight;
	cin >> distance;
	cin>> dayOrNight;
	double price = 0;
	double taxiRate = 0;
	if(dayOrNight=="day") {
		taxiRate = 0.79;
	}
	else
	{
		taxiRate = 0.90;
	}
	if (distance<20)
	{
		price = 0.70 + distance * taxiRate;
	}
	else if (distance <100) {
		price = distance * 0.09;
	}
	else {
		price = distance * 0.06;
	}
	cout<< price<< endl;
	return 0;
}