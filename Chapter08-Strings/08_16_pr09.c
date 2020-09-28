#include <stdio.h>

// Welcome to Paritosh's VS code

void occarence(char *st, char c)
{
    char *ptr = st;
    int count = 0;

    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
        }
        ptr++;
    }

    if (count >= 1)
    {
        printf("\nYes it have\n And it's Occrunces is--->  %d\n\n", count);
    }

    else
    {
        printf("No it's not present\n\n");
    }
}

int main()
{
    char st[] = "Paaaaaritosh";

    occarence(st, 'P');

    return 0;
}