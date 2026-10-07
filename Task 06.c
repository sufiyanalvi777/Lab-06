#include<stdio.h>

int main()
{
    int marks;

    do
    {
        printf("Enter Marks (0-100): ");
        scanf("%d", &marks);

        if(marks < 0 || marks > 100)
        {
            printf("Invalid Marks! Enter again.\n");
        }

    } while(marks < 0 || marks > 100);

    if(marks >= 50)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}
