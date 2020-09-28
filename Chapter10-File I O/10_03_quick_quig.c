#include <stdio.h>

// Welcome to Paritosh's VS code

int main()
{
    FILE *ptr;
    ptr = fopen("Pari.txt", "r");
    int num;
    int num2;
if (ptr == NULL)
{
    printf("This file dose not exist\n");
}

else
{
   fscanf(ptr, "%d", &num);
    fscanf(ptr, "%d", &num2);
    fclose(ptr);

    printf("The value of the num is %d \n", num);
    printf("The value of the num2 is %d \n", num2);
}

    return 0;
}