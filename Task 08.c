/*TASK 8: WEATHER STATION TEMPERATURE LOG:
A weather station records the temperature (°C) every hour for 8 hours in a day. Store the readings in
an array and report the hottest temperature, the coldest temperature, and the second-hottest
temperature of the day.*/



#include<stdio.h>
int main()
{
	int temperature[8],i,hot,cold,sec;
	for(i=0;i<8;i++){
		printf("Enter the Temperature : \n");
		scanf("%d",&temperature[i]);
	}
	hot=temperature[0];
	cold=temperature[0];
	for(i=0;i<8;i++){
		if(hot < temperature[i]){
			hot = temperature[i];
		}
	} 
	printf("the hottest temperatur is : %d \n",hot);
	
	
	for(i=0;i<8;i++){
		if(cold > temperature[i]){
			 cold = temperature[i];
		}
	}
	
	printf("the coldest temperature is : %d \n",cold);
	sec=cold;
    for(i = 0; i < 8; i++)
    {
        if(temperature[i] > sec && temperature[i] < hot)
        {
            sec = temperature[i];
        }
    }
    printf("the second hottest temperature is : %d \n",sec);
		
	}

