#include <stdio.h>
#include <stdlib.h>

// Welcome to Paritosh's VS code

int main()
{


int *ptr;
int *ptr2;
ptr = (int *) malloc(6 * sizeof(int));

for (int i = 0; i < 600; i++)
{
ptr2 = (int *) malloc(60000 * sizeof(int));
printf("Enter the value of %d eliments --> ",i+1);
scanf("%d", &ptr2[i]);
free(ptr2);
}

for (int i = 0; i < 6; i++)
{
printf("The value of %d eliments is %d \n",i+1, ptr[i]);
}
    return 0;
}