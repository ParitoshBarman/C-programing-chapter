#include<stdio.h>

 
 // Welcome to Paritosh's VS code


int main(){
    int a =7;
    int *ptr ;
    ptr = &a;

    printf("The address of variable a is %u\n\n",&a);

printf("The value of the ptr is %d\n\n",ptr);
printf("The value of the a is %d\n\n",*ptr);

 printf("The value of the varial is using the address %d\n\n",*(&a));


    return 0;
}