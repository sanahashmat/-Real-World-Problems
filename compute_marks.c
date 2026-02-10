#include <stdio.h>

int main() {
    int n, i, total = 0;
    float average;

    // Get the number of subjects from the user
    printf("Enter number of subjects: ");
    scanf("%d", &n);

    // Declare an array of size 'n' to store marks
    int marks[n];

    printf("Enter marks for each subject:\n");
    // Use a loop to input marks and calculate the total
    for (i = 0; i < n; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i]; // Add the current mark to the total
    }

    // Calculate the average
    average = (float)total / n; // Cast total to float for accurate division

    // Display the results
    printf("\n--- Results ---\n");
    printf("Total marks = %d\n", total);
    printf("Average marks = %.2f\n", average);

    return 0;
}
