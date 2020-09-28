#include <stdio.h>

// Welcome to Paritosh's VS code

int main()
{
    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of marks for student %d -->  ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("You have enter student %d marks = %d\n", i + 1, marks[i]);
    }

    return 0;
}