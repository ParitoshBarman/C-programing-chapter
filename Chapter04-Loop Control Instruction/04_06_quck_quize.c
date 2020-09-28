#include <stdio.h>

// Welcome to Paritosh's Visual Studio

int main()
{
    int i;
    int a = 0;

    printf("Enter a number --> ");

    scanf("%d", &i);

    do
    {
        printf("%d \n", a + 1);
        a++;
    } while (a < i);

    return 0;
}