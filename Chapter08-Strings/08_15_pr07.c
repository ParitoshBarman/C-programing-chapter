#include <stdio.h>

// Welcome to Paritosh's VS code

void decrypt(char *st)
{
    char *ptr = st;

    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}

int main()
{
    char st[] = " Nsjonpz!qsfnf!f!qpsfdif!if!if!if!if";

    decrypt(st);

    printf("Decrypted msg is ---> %s\n\n", st);

    return 0;
}