#include <stdio.h>

// Welcome to Paritosh's Visual Studio

int main()
{
    int n;
    printf("Enter a number --> ");
    scanf("%d", &n);

    for (int i = n; i; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}