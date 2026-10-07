/*TASK 7: RESTAURANT ORDERING KIOSK:
A self-service kiosk shows a menu: 1) Add Item, 2) Remove Item, 3) View Total, 4) Checkout. The
kiosk should keep showing this menu and processing the customer's choice repeatedly until they
select Checkout, since the menu must appear at least once even for a walk-up customer.	*/

#include<stdio.h>
int main()
{
	int choice;
	do{
		printf("Enter kiosk menu 1 for add item,2) Remove Item 3) view Total 4) checkout : \n");
		scanf("%d",&choice);
		switch(choice)
        {
            case 1:
                printf("\nItem Added.");
                break;

            case 2:
                    printf("\nItem Removed.");
      
                break;

            case 3:
                printf("\nYour Total Bill ");
                break;

            case 4:
                printf("\nCheckout Successful.");
                break;

            default:
                printf("\nInvalid Choice! Enter 1 to 4.");
        }
	}
	while(choice != 4) ; {
		printf("Thank You \n");
		
	}return 0;
}
