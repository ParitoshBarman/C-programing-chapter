#include <stdio.h>

// Welcome to Paritosh's VS code

int strlen(char *st)
{
    char *ptr = st;
    int i = 0;
    while (*ptr != '\0')
    {
        i++;
        ptr++;
    }
    return i;
}

int main()
{
    char st[] = "Paritosh";
    int l;
    l = strlen(st);

    printf("The length of this string is %d\n", l);

    return 0;
}