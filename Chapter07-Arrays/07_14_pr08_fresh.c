#include <stdio.h>

// Welcome to Paritosh's VS code

void printTable(int *mulTable, int num, int n)
{

    printf("\nThe multiplacation table for %d is -->\n", num);
    for (int i = 0; i < n; i++)
    {
        mulTable[i] = num * (i + 1);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d X %d = %d\n", num, i + 1, mulTable[i]);
    }

    printf("******************************************************************\n");
}

int main()
{
    int mulTable[3][10];

    int numTable, lengthNum;

    printf("How many table you want -->");
    scanf("%d", &numTable);

    int whNum[numTable];

    for (int i = 0; i < numTable; i++)
    {
        printf("Enter the number for table %d --> ", i + 1);
        scanf("%d", &whNum[i]);
    }

    printf("Enter the length of the table -->");
    scanf("%d", &lengthNum);

    for (int i = 0; i < numTable; i++)
    {
        printTable(mulTable[i], whNum[i], lengthNum);
    }

    return 0;
}