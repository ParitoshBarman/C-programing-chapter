#include <stdio.h>

// Welcome to Paritosh's Visual Studio

int main()
{
    int a = 1, n, factorial = 1;

    printf("Enter the number --> ");
    scanf("%d", &n);

    while (a <= n)
    {
        factorial *= a;
        a++;
    }
    printf("The value of Factorial %d is = %d\n", n, factorial);
    return 0;
}