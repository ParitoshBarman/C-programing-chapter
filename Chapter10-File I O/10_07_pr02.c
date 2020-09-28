#include <stdio.h>

// Welcome to Paritosh's VS code

int main()
{
    int a;
    printf("Enter the integer you need the table of --> ");
    scanf("%d", &a);
    FILE *ptr;
    ptr = fopen("table.txt", "w");

    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr, "%d X %d = %d\n", a, i + 1, a * (i + 1));
    }

    printf("Successfully genarate the table of %d to table.txt\n", a);

    fprintf(ptr, "Successfully genarate the table of %d to table.txt", a);

    fclose(ptr);

    return 0;
}