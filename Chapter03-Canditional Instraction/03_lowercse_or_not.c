#include <stdio.h>

// Welcome to Paritosh's Visual Studio

int main()
{

    // 97-122 == a to z  Accii values

    char ch;

    printf("\n\n Enter your charecter -->  ");
    scanf("%c", &ch);

    if (ch >= 97 && ch <= 122)
    {
        printf("\n\n  Your cherecter is lowercase  \n\n");
    }

    else
    {
        printf("\n\n Your cherecter is not lewercase  \n\n");
    }

    return 0;
}