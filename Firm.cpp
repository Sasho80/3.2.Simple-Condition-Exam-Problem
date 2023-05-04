#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int projectHours;
	int availableDays;
	int numWorkers;
	int overtimeWorker;
	cin >> projectHours;
	cin >> availableDays;
	cin >> numWorkers;
	double workDays=availableDays*0.9;
	double workHours=workDays*8*numWorkers;
	double overtimeHours=(double)numWorkers*2*workDays;
	double totalHours=floor(workHours+overtimeHours);
	if (totalHours>=projectHours)
	{
		int result = totalHours - projectHours;
		cout << "Yes!" << result << " hours left." << endl;
	}
	else
	{
		int result = projectHours-totalHours;
		cout << "Not enough time!" << result << " hours needed." << endl;
	}
	return 0;
}