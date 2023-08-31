#include <stdio.h>

int main()
{
    int num, sum = 0, i = 0; // Initialize variables to store user input, sum, and count
    float avg; // Initialize a variable to store the average

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
            sum += num; // Add the entered number to the running sum
            i++; // Increment the count of entered numbers
        }
    }
    
    printf("\nSum of the Entered %d Numbers: %d", i, sum); // Print the sum of the entered positive numbers
    printf("\nAverage of entered numbers is: %f", (float)(sum) / i); // Calculate and print the average of entered numbers

    return 0; // Indicate successful completion of the program
}
