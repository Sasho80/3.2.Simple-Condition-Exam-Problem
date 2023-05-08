#include <iostream>
#include <math.h>
using namespace std;
int main() {
	double vineyardArea;
	double grapePerSquare;
	double neededLiters;
	int workers;
	cin >> vineyardArea;
	cin >> grapePerSquare;
	cin >> neededLiters;
	cin >> workers;
	double harvestPerWine = vineyardArea*0.4*grapePerSquare;
	double wine = harvestPerWine/2.5;
	if (wine>=neededLiters){
		double totalWine = floor(wine);
		double litersLeft = ceil(wine-neededLiters);
		double literPerPerson = ceil(litersLeft/(double)workers);
		cout << "Good harvest this year! Total wine: " <<
			totalWine << " liters." << endl;
		cout << litersLeft << " liters left -> " <<
			literPerPerson << " liters per person. " << endl;   
	}
	else
	{
		double litersNeeded = floor(neededLiters-wine);
			cout << "It will be a tough winter! More " << 
		litersNeeded << " liters wine needed." << endl;
	}
	return 0;
}
