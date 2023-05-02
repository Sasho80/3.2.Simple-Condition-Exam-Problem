#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main() {
	int daysInYears = 365;
	int holidays;
	cin >> holidays;
	int minutesForWorkingDays = 63;
	int minutesForHolidays = 127;
	int workingDays = daysInYears - holidays;
	int totalPlayMinutes= workingDays * minutesForWorkingDays
        +holidays*minutesForHolidays;
	double diffrence = abs(30000-totalPlayMinutes);
	int hours =diffrence/60;
	int minutes =round(abs((hours-diffrence/60)*60));
	if (totalPlayMinutes > 30000) {
		cout << "Tom will run away" << endl;
		cout << (int)hours << " hours and " <<
			minutes << " minutes more for play" << endl;
	}
	else
	{
		cout << "Tom sleeps well" << endl;
		cout << hours << " hours and " << 
		minutes << " minutes less for play " << endl;
	}
	return 0;
}
