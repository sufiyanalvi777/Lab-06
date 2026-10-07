/*TASK 2: CLASS TEST SCORES:
A teacher has n students in a class. Take n from the user, then take each student's test score (out of
100). Print the class's total score and average score.*/
#include<stdio.h>
int main()
{
	int n,i,score,total=0,avg;
	printf("Enter Number of Student in the class : \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("Enter Student %d Test Score (out of 100) : \n",i);
		scanf("%d",&score);
		total = total + score;
	}
	avg = total / n ;
	printf("The total score is : %d \n",total);
	printf("The Average score is : %d \n",avg);
}
