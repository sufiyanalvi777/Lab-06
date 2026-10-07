/*TASK 3: LOAN INTEREST GROWTH:
A person deposits money and it grows using compound interest. Given the number of years, calculate
how much a sum of money grows if it's multiplied by a fixed growth factor each year (this is
essentially a factorial-style repeated multiplication).*/



#include<stdio.h>
int main()
{
	int i , years;
	float money , growth;
	
	printf("Enter initial amount of Money : \n");
	scanf("%f",&money);
	printf("Enter number of the years: \n");
	scanf("%d",&years);
	printf("Enter Growth factor: \n");
	scanf("%f",&growth);
	
	for(i=1;i<=years;i++){
		money = money * growth;
	}
	printf("The Sum of Money Grows is : %f ",money);
	return 0;

}
