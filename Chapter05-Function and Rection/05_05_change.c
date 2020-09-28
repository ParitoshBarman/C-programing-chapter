#include <stdio.h>

// Welcome to Paritosh's VS code

void change(int a);

int main()
{

    int b = 344;
    printf("The value of b before change %d\n", b);
    change(b);
    printf("The value of b after change %d\n", b);

    return 0;
}

void change(int a)
{
    a = 77;
}