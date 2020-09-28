#include <stdio.h>

// Welcome to Paritosh's VS code

int main()
{
    int marks[4]; // Allocate spece for 4 integer

    printf("Enter the value of marks for student 1 -->  ");
    scanf("%d", &marks[0]);
    printf("Enter the value of marks for student 2 -->  ");
    scanf("%d", &marks[1]);
    printf("Enter the value of marks for student 3 -->  ");
    scanf("%d", &marks[2]);
    printf("Enter the value of marks for student 4 -->  ");
    scanf("%d", &marks[3]);

    printf("\n\nYou have enter %d   %d   %d  and  %d\n\n", marks[0], marks[1], marks[2], marks[3]);

    return 0;
}