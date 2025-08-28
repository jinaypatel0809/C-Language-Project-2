#include<stdio.h>
int main(){
    int score;
    char grade;

    printf("Enter your score: ");
    scanf("%d", &score);

    grade = (score >= 90) ? 'A':
            (score >= 80) ? 'B':
            (score >= 70) ? 'C':
            (score >= 60) ? 'D':
            (score >= 50) ? 'E' : 'F';

    printf("Your Grade is %c\n", grade);

    switch(grade) {
        case 'A':
            printf("Excellent work!\n");
            break;
        case 'B':
            printf("Well done.\n");
            break;
        case 'C':
            printf("Good job.\n");
            break;
        case 'D':
            printf("You passed, but you could do better.\n");
            break;
        case 'F':
            printf("Sorry, you failed.\n");
            break;
        default:
            printf("Invalid grade.\n");
    }

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


    printf("Your grade is %c. ", grade);


    if (grade == 'F') {
        printf("Please try again next time.\n");
    } else {
        printf("Excellent work! You are eligible for the next level.\n");
    }


    return 0;
}