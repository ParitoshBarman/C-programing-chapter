#include <stdio.h>

// Welcome to Paritosh's Visual Studio

int main()
{
    int n, divisible = 2, prime = 1;

    printf("Enter your number --> ");
    scanf("%d", &n);

    for (divisible; divisible < n; divisible++)
    {
        if (n % divisible == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("This is not a prime number\n\n");
    }
    else
    {
        printf("This is the prime number\n\n");
    }

    return 0;
}