01.Problem: Transportation Price
A student has to travel n kilometers. He can choose between three types of transportation:
• Taxi. Starting fee: 0.70 EUR. Day rate: 0.79 EUR/km. Night rate: 0.90 EUR/km.
• Bus. Day / Night rate: 0.09 EUR/km. Can be used for distances of minimum 20 km.
• Train. Day / Night rate: 0.06 EUR/km. Can be used for distances of minimum 100 km.
Write a program that reads the number of kilometers n and period of the day (day or night) and 
calculates the price for the cheapest transport.
Input Data
Two lines are read from the console:
• The first line holds a number n – number of kilometers – an integer in the range of [1 … 5000].
• The second line holds the word “day” or “night” – traveling during the day or during the night.
Output Data
Print on the console the lowest price for the given number of kilometers.
Sample Input and Output
Input Output Input Output Input Output Input Output 
5     4.65   7     7      25    2.25   180   10.8
day          night        day          night

02.Problem: Pipes in Pool
A pool with volume V fills up via two pipes. Each pipe has a certain flow rate (the liters of water, 
flowing through a pipe for an hour). A worker starts the pipes simultaneously and goes out for N 
hours. Write a program that finds the state of the pool the moment the worker comes back.
Input Data
Four lines are read from the console:
• The first line contains a number V – the volume of the pool in liters – an integer in the range of 
[1 … 10000].
• The second line contains a number P1 – the flow rate of the first pipe per hour – an integer in 
the range of [1 … 5000].
• The third line contains a number P2 – the flow rate of the second pipe per hour – an integer in 
the range of [1 … 5000].
• The fourth line contains a number H – the hours that the worker is absent – a floating-point 
number in the range of [1.0 … 24.00].
Output Data
Print on the console one of the two possible states:
• To what extent the pool has filled up and how many percent each pipe has contributed with. 
All percent values must be formatted to an integer (without rounding).
o "The pool is [x]% full. Pipe 1: [y]%. Pipe 2: [z]%."
• If the pool has overflown – with how many liters it has overflown for the given time – a floatingpoint number.
o "For [x] hours the pool overflows with [y] liters."
Have in mind that due to the rounding to an integer, there is data loss and it is normal the sum of the 
percents to be 99%, not 100%.
Sample Input and Output
Input Output                         Input Output 
1000  The pool is 66% full. Pipe 1:  100
100   45%. Pipe2: 54%                100   For 2.5 hours the pool overflows with
120                                  100   400 liters.
3                                    2.5

03.Problem: Sleepy Tom Cat
Tom Cat likes to sleep all day but, unfortunately, his owner is always playing with him whenever he 
has free time. In order to sleep well, the norm of games that Tom has is 30 000 minutes per year. The 
time for games he has depends on the holidays that his owner has:
• During workdays, his owner plays with him 63 minutes per day.
• During holidays, his owner plays with him 127 minutes per day.
Write a program that reads the number of holidays and prints whether Tom can sleep well and how 
much the difference from the norm for the current year is. It is assumed that there are 365 days in 
one year.
Example: 20 holidays -> the working days are 345 (365 - 20 = 345). The time for games is 24 275 
minutes (345 * 63 + 20 * 127). The difference from the norm is 5 725 minutes (30 000 – 24 275 = 5 
725) or 95 hours and 25 minutes.
Input Data
The input is read from the console and consists of an integer – the number of holidays in the range 
of [0 … 365].
Output Data
Two lines have to be printed on the console:
• If Tom's time for games is above the norm for the current year:
o On the first line print: “Tom will run away”
o On the second line print the difference from the norm in the format:
“{H} hours and {M} minutes more for play”
140 Programming Basics with C#
• If the time for games of Tom is below the norm for the current year:
o On the first line print: “Tom sleeps well”
o On the second line print the difference from the norm in the format:
“{H} hours and {M} minutes less for play”
Sample Input and Output
Input  Output                                   Input Output 
20     Tom sleeps well                          113   Tom will run away
       95 hours and 25 minutes less for play          3 hours and 47 minutes more for play   

04.Problem: Harvest
In a vineyard with area X square meters, 40% of the harvest goes for wine production. Y kilograms of 
grapes are extracted from 1 m2
 vineyard. 2,5 kg of grapes are needed for 1 liter of wine. The wanted 
quantity of wine for sale is Z liters.
Write a program that calculates how much wine can be produced and whether that quantity is enough.
If it is enough, the rest is divided between the vineyard workers equally.
Input Data
The input data is read from the console and consists of exactly 4 lines:
• First line: X m2
 is the vineyard – an integer in the range of [10 … 5000].
• Second line: Y grapes for one m2
 – an integer in the range of [0.00 … 10.00].
• Third line: Z needed liters of wine – an integer in the range of [10 … 600].
• Fourth line: number of workers – an integer in the range of [1 … 20].
Output Data
The following has to be printed on the console:
• If the produced wine is less than the needed quantity:
o “It will be a tough winter! More {insufficient wine} liters wine needed.”
* The result has to be rounded down to the nearest integer.
• If the produced wine is more than the needed quantity:
o “Good harvest this year! Total wine: {total wine} liters.”
* The result has to be rounded down to the nearest integer.
o “{Wine left} liters left -> {wine for one worker} liters per person.”
* Both of the results have to be rounded up to the higher integer.
Sample Input and Output
Input Output                                   Input Output 
 650  Good harvest this year! Total wine:      1020  It will be a tough winter! More
 2    208 liters.                              1.5   180 liters wine needed.
 175  33 liters left -> 11 liters per person.  425
 3                                             4

05.Problem: Firm
A firm gets a request for creating a project for which a certain number of hours are needed. The firm 
has a certain number of days. During 10% of the days, the workers are being trained and cannot work
on the project. A normal working day is 8 hours long. The project is important for the firm and every 
worker must work on it with overtime of 2 hours per day.
The hours must be rounded down to the nearest integer (for example, 6.98 hours are rounded to 6 
hours).
Write a program that calculates whether the firm can finish the project on time and how many hours 
more are needed or left.
Input Data
The input data is read from the console and contains exactly three lines:
• On the first line are the needed hours – an integer in the range of [0 … 200 000].
• On the second line are the days that the firm has – an integer in the range of [0 … 20 000].
• On the third line are the number of all workers – an integer in the range of [0 … 200].
Output Data
Print one line on the console:
• If the time is enough:
o "Yes!{the hours left} hours left.".
• If the time is NOT enough:
o "Not enough time!{additional hours} hours needed.".
Sample Input and Output
Input  Output        Input Output 
90     Yes!2 hours   99    Not enough time!
7      left.         3     72 hours needed.
3                    1






