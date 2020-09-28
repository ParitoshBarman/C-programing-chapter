#include <stdio.h>

#include <math.h>

// Welcome to Paritosh's Visual Studio

int main()
{
    int a = 4;
    int b = 8;

    printf("\nThe value of a + b ---> %d \n ", a + b);
    printf("The value of a - b ---> %d \n ", a - b);
    printf("The value of a * b ---> %d \n ", a * b);
    printf("The value of a / b ---> %d \n \n", a / b);

    int z;
    z = b * a; //legal
               //b * a = z ; //legal

    printf("\nThe value of a z ---> %d \n \n\n", z);

    printf("5 when divided by 2 leaves a remainder of %d \n", 5 % 2);
    printf("-5 when divided by 2 leaves a remainder of %d \n", -5 % 2);
    printf("5 when divided by -2 leaves a remainder of %d \n", 5 % -2);

    // No operator assumed to be present

    //  printf("The value of 4 * 5 is %d \n",(4)(5));  ===> will not return 20/ Wrong ||

    printf("The value of 4 * 5 is %d \n", (4) * (5));

    // There is no opperator to9 perform exponentiation in C.

    printf("The value of 4^5 is %d \n", 4 ^ 5); // Will not produce 4 to the power 5

    printf("The value of 4 to the power 5 is %f \n", pow(4, 5));

    printf("The value of 6 + 5 is %d \n ", 6 + 5);
    printf("The value of 6 + 5.6 is %f \n ", 6 + 5.6);
    printf("The value of 6.1 + 5.6 is %f \n ", 6.1 + 5.6);
    printf("The value of 5/2 is %f \n", 5.0 / 2);
    printf("The value of 3.0/9 is %f \n", 3.0 / 9);

    return 0;
}