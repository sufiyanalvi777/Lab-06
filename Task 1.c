/*A cinema sells tickets for shows 1 through 10 in a day, and the price rises by Rs. 50 for each later
show (show 1 = Rs. 500). Print a schedule showing the show number and its ticket price.*/


#include<stdio.h>
int main()
{
	int price=500,tick=1;
	
	for(tick=1;tick<=10;tick++){
		printf("show %d =  Rs %d \n", tick , price);
		price = price + 50;
	}
}
