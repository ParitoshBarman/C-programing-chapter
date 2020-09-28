#include <stdio.h>
#include <string.h>


// Welcome to Paritosh's VS code

typedef struct employee
{
    int code;
    float salary;
    char name[20];
} emp;


void show(emp emp1){
    printf("The code of employee is --> %d\n", emp1.code);
    printf("The salary of employee is --> %f\n", emp1.salary);
    printf("The name of employee is --> %s\n", emp1.name);
}

int main(){
    // Declering e1 and ptr 
    emp e1;
    emp *ptr;   

    // Pointig ptr to e1 
    ptr = &e1;

    // Set the nimber velue for e1
    ptr->code = 101;
    ptr->salary = 11.01;
    strcpy(ptr->name, "Paritosh");

show(e1);

      




    
    
    

    return 0;
}