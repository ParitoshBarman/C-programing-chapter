#include <stdio.h>

// Welcome to Paritosh's VS code

void encrypt(char *st)
{
    char *ptr = st;

    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}

int main()
{
    char st[] = "Mrinmoy preme e poreche he he he he";

    encrypt(st);

    printf("Encrypted msg is ---> %s\n\n", st);

    return 0;
}