#include <stdio.h>

int main()
{
    int num = 0; // Initialize a variable to store user input

    while (1) // Infinite loop to keep asking for numbers
    {
        printf("\nEnter Numbers (-1 to terminate):"); // Prompt the user to enter a number
        scanf("%d", &num); // Read the user's input and store it in the 'num' variable

        if (num < 0)
        {
            break; // If the entered number is less than 0, exit the loop
        }
        else
        {
            printf("Entered number is %d\n", num); // Print the entered number
        }
    }

    return 0; // Indicate successful completion of the program
}
