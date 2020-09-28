#include <stdio.h>

// Welcome to Paritosh's VS code

float avarage(int a, int b, int c);

int main()
{
    int x, y, z;

    printf("Please enter your first number --->");
    scanf("%d", &x);
    printf("Please enter your second number --->");
    scanf("%d", &y);
    printf("Please enter your therd number --->");
    scanf("%d", &z);

    printf("The avarage of three number is ---> %f \n", avarage(x, y, z));

    return 0;
}

float avarage(int a, int b, int c)
{
    float d;

    d = (float)(a + b + c) / 3;
    return d;
}