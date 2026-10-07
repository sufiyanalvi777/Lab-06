/*TASK 5: WATER TANK DRAINING SIMULATION:
A water tank starts at a given level. Every hour, if the tank has an even number of liters, half the water
drains out; if it has an odd number, the tank operator adds 3x + 1 liters as an emergency refill rule (a
Collatz-style simulation). Simulate until the tank reaches exactly 1 liter, printing the level each hour
and the total number of hours taken.
#include <stdio.h>*/
#include<stdio.h>
int main()
{
	int water,hour=0;
	printf("Enter Water level : ");
	scanf("%d",&water);
	while( water != 1){
		printf("Hours %d = %d litre \n",hour,water);
		if(water % 2 == 0){
			water =water /2;
		}
		else{
			water = water * 3 + 1;
		}
		hour++;
	}
	printf("Hours %d = %d liter \n",hour,water);
	printf("Total Hours = %d\n",hour);
	return 0;
}

