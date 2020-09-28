#include <stdio.h>
#include <string.h>

// Welcome to Paritosh's VS code

struct employee
{
    int code;
    float salary;
    char name[20];
};

int
main()
{

    struct employee e1;
    e1.code = 100;
    e1.salary = 34.454;
    // e1.name = "Paritosh"; ---> wond work
    strcpy(e1.name, "Paritosh Barman");

    printf("%d\n", e1.code);
    printf("%.3f\n", e1.salary);
    printf("%s\n", e1.name);


    return 0;
}