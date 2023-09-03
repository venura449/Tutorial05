#include <stdio.h>

struct Mark {
    int marks1, marks2, marks3, marks4;
};

int main() {
    struct Mark st1, st2, st3; // Declare variables to store student marks
    int stCount = 0, sum = 0, highestSum = 0, highestSumIndex = -1;

    while (stCount < 3) // Input marks for three students
    {
        int i = 0; // setting subject no for 1 in each time execution

        // Input student marks for subject 1
        printf("\nEnter the mark of student %d for subject %d: ", stCount + 1, i + 1);
        scanf("%d", &st1.marks1);
        sum = st1.marks1;
        i++;

        // Input student marks for subject 2
        printf("Enter the mark of student %d for subject %d: ", stCount + 1, i + 1);
        scanf("%d", &st1.marks2);
        sum += st1.marks2;
        i++;

        // Input student marks for subject 3
        printf("Enter the mark of student %d for subject %d: ", stCount + 1, i + 1);
        scanf("%d", &st1.marks3);
        sum += st1.marks3;
        i++;

        // Input student marks for subject 4
        printf("Enter the mark of student %d for subject %d: ", stCount + 1, i + 1);
        scanf("%d", &st1.marks4);
        sum += st1.marks4;

        printf("\nSum of marks for student %d: %d\n", stCount + 1, sum);

        // Update highestSum and highestSumIndex if the current sum is higher
        if (sum > highestSum) {
            highestSum = sum;
            highestSumIndex = stCount;
        }
        stCount += 1; // Increment the student count
    }

    if (highestSumIndex != -1) {
        printf("\nStudent with the highest marks is student %d with a sum of %d marks.\n", highestSumIndex + 1, highestSum);
    } else {
        printf("No student data provided.\n");
    }

    return 0;
}
