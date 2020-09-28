#include <stdio.h>
#include <string.h>


// Welcome to Paritosh's VS code

struct employee
{
    int code;
    float salary;
    char name[20];
};


int main(){

    struct employee e1;
    struct employee *ptr;   
    ptr = &e1;

    // (*ptr).code = 101;      ///  Or you can also write   ptr->code = 101;
    ptr->code = 101;



    printf("%d\n",e1.code);
    
    

    return 0;
}