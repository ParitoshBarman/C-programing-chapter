#include <stdio.h>

// Welcome to Paritosh's VS code

void slice(char *st, int n, int m)
{
    int i = 0;

    while ((i+n) < m)
    {
        st[i] = st[i+n];

        i++;
    }

    st[i] = '\0';
}

int main()
{
    int n, m;
    char st[] = "Paritosh";
    printf("Enter your renge\nFirst number--> ");
    scanf("%d", &n);

    printf("Second number--> ");
    scanf("%d", &m);

    slice(st, n, m);

    printf("%s\n\n", st);

    return 0;
}