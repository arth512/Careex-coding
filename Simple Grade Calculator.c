#include <stdio.h>
int main()
{
    int score;
    char grade;
    printf("Enter your score: ");
    scanf("%d",&score);
    grade=(score >= 90 && score <= 100)?'A':
            (score >= 80)?'B':
            (score >= 70)?'C':
            (score >= 60)?'D':'F';
    printf("Your grade is %c\n", grade);
    switch(grade)
    {
        case 'A':
            printf("Excellent work!\n");
            break;

        case 'B':
            printf("Good job!\n");
            break;

        case 'C':
            printf("You passed.\n");
            break;

        case 'D':
            printf("You can do better.\n");
            break;

        case 'F':
            printf("Sorry, you failed.\n");
            break;
    }
    if(grade=='F')
    {
        printf("You are not eligible for the next level.\n");
    }
    else
    {
        printf("You are eligible for the next level.\n");
    }
}

