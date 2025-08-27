#include <stdio.h>

int main() {
    int score;
    char grade;

    // Input score
    printf("Enter your score: ");
    scanf("%d", &score);

    // Determine grade
    if (score >= 90)
        grade = 'A';
    else if (score >= 75)
        grade = 'B';
    else if (score >= 60)
        grade = 'C';
    else if (score >= 50)
        grade = 'D';
    else
        grade = 'F';

    // Print grade
    printf("Your grade is %c. ", grade);

    // Eligibility check
    if (grade == 'F') {
        printf("Please try again next time.\n");
    } else {
        printf("Excellent work! You are eligible for the next level.\n");
    }

    return 0;
}
