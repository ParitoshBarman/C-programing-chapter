#include <stdio.h>

// Welcome to Paritosh's VS code

void printPattan(int n);

int main()
{
    int a;
    printf("Please enter a number --> ");
    scanf("%d", &a);
    printPattan(a);

    return 0;
}

void printPattan(int n)
{
     //   printf("value of n -->%d\n",n);
    if (n == 1)
    {
        printf("*\n");
        return;
    }

     printPattan(n - 1);
    //   printf("value of new n -->%d\n",n);

    for (int i = 0; i < ((4 * n) - 1); i++)
    {
       
        printf("*");
         //     printf("value of i -->%d\n",i);
    }
    printf("\n");
    
   
}