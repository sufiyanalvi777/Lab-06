/*TASK 10: PASSWORD STRENGTH CHECKER:
A signup form takes a username (up to 20 characters) as input. Count how many vowels and
consonants it contains (a basic strength heuristic), then convert the username to all uppercase to store
it in the system's case-insensitive username database.*/
#include <stdio.h>
#include <ctype.h>

int main()
{
    char username[21];
    int i, vowels = 0, consonants = 0;

    printf("Enter Username: ");
    scanf("%20s", username);

    for(i = 0; username[i] != '\0'; i++)
    {
        if(username[i] == 'a' || username[i] == 'e' ||
           username[i] == 'i' || username[i] == 'o' ||
           username[i] == 'u' || username[i] == 'A' ||
           username[i] == 'E' || username[i] == 'I' ||
           username[i] == 'O' || username[i] == 'U')
        {
            vowels++;
        }
        else if(isalpha(username[i]))
        {
            consonants++;
        }
    }

    printf("\nNumber of Vowels: %d", vowels);
    printf("\nNumber of Consonants: %d", consonants);

    for(i = 0; username[i] != '\0'; i++)
    {
        username[i] = toupper(username[i]);
    }

    printf("\nUsername in Uppercase: %s", username);

    return 0;
}
