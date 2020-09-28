#include <stdio.h>
#include <stdlib.h>

// Welcome to Paritosh's VS code

int main()
{

    int n;
    printf("How many integer you want to enter--> ");
    scanf("%d", &n);

    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d eliments --> ", i + 1);
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value of %d eliments is %d \n", i + 1, ptr[i]);
    }
    return 0;
}