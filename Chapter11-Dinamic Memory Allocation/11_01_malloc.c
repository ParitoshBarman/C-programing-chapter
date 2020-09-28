#include <stdio.h>
#include <stdlib.h>

// Welcome to Paritosh's VS code

int main()
{
    // Size of oparater in C

    // printf("The size of int in pc is %d\n", sizeof(int));
    // printf("The size of float in pc is %d\n", sizeof(float));
    // printf("The size of char in pc is %d\n", sizeof(char));


int *ptr;
ptr = (int *) malloc(6 * sizeof(int));

for (int i = 0; i < 6; i++)
{
printf("Enter the value of %d eliments --> ",i+1);
scanf("%d", &ptr[i]);
}

for (int i = 0; i < 6; i++)
{
printf("The value of %d eliments is %d \n",i+1, ptr[i]);
}
    return 0;
}