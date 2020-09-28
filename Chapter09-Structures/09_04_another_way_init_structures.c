#include <stdio.h>

// Welcome to Paritosh's VS code

struct employee
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee Pari = {100, 34.32, "Paritosh"};

    printf("The code is --> %d\n",Pari.code);
    printf("The Salary is --> %.2f\n",Pari.salary);
    printf("The name is --> %s\n",Pari.name);

    return 0;
}