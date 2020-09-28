#include <stdio.h>

// Welcome to Paritosh's VS code

int main()
{
    int i = 590;
    int *ptr;
    int **ptr_ptr;

    ptr = &i;

    ptr_ptr = &ptr;

    printf("The value of i is %d \n\n", **ptr_ptr);

    return 0;
}