/*TASK 9: WAREHOUSE INVENTORY LOOKUP:
A warehouse stores the stock count of 10 different product shelves in an array. Print the shelf stock
levels in reverse order (as if scanning from the back of the warehouse to the front), then let a staff
member search for a specific stock count and report which shelf (index) holds it, or that it doesn't
exist.*/
#include<stdio.h>
int main()
{
	int count[10],i,spe,found = 0;
	for(i=0;i<10;i++){
		printf("Enter Stock %d Count : \n",i);
		scanf("%d",&count[i]);
	}
	for(i=9;i>=0;i--){
		printf("The reverse Stock %d Count is : %d \n",i,count[i]);
	}
	printf("Enter for a specific count number : \n");
	scanf("%d",&spe);
	for(i=0;i<10;i++){
		if(count[i] == spe){
			printf("the index of the specific stock is : %d \n",i );
		    found = 1;
		}
	}
	if(found == 0)
	printf("it doesnot exist");
	
	
}
