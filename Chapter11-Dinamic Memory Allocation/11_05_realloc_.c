#include <stdio.h>
#include <stdlib.h>

// Welcome to Paritosh's VS code

int main()
{

    int *ptr;

    ptr = (int *)malloc(6 * sizeof(int));

    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of %d eliments --> ", i + 1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d eliments is %d \n", i + 1, ptr[i]);
    }

    //  Reallocated ptr using realloc()

    ptr = realloc(ptr,10 * sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the value of %d eliments --> ", i + 1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("The value of %d eliments is %d \n", i + 1, ptr[i]);
    }

    return 0;
}