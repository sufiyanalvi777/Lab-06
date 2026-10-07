/*TASK 4: ATM PIN DIGIT CHECK:
A bank's system needs to verify a 4-to-6 digit PIN entered by a customer. Take the PIN as an integer
and, digit by digit, find the sum of its digits and print the PIN reversed (used as a basic
checksum/verification step).*/

#include<stdio.h>
int main()
{
	int pin,digit,sum=0,reverse = 0;
	printf("Enter PIN : \n");
	scanf("%d",&pin);
	while(pin>0){
		digit = pin % 10;
		sum = sum + digit;
		reverse = reverse * 10 + digit ;
		pin = pin / 10;
	}
	printf("Sum of Digits : %d \n",sum);
	printf("Reverse of the Pin is : %d \n",reverse);
	return 0;
}
