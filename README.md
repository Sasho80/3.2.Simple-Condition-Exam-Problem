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
138 Programming Basics with C#
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


.
