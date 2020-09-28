#include <stdio.h>

// Welcome to Paritosh's VS code

int factorial(int x);

int main()
{
    int a = 4;
    printf("The value of factorial %d is %d \n\n", a, factorial(a));

    return 0;
}

int factorial(int x)
{
    
    {
        return x * factorial(x - 1);
    }
} 