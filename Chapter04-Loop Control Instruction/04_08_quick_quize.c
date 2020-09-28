#include <stdio.h>

// Welcome to Paritosh's Visual Studio

int main()
{
    int n;

    printf("Enter a number --> ");
    scanf("%d", &n);

    for (int a = 0; a < n ; a++ )
    {
        printf("%d\n", a + 1 );
    }

    return 0;
}