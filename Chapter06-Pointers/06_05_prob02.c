#include<stdio.h>

 
 // Welcome to Paritosh's VS code


void printAdd(int a){
    printf("The address of the variable a is after function %u\n\n", &a);
}

int main(){
    int i =4;

printf("The address of i is %u\n\n", &i);

printAdd(i);


    return 0;
}