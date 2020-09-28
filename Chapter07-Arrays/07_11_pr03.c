#include<stdio.h>

 
 // Welcome to Paritosh's VS code


int main(){
    int mul[10];

    for (int i = 0; i < 10; i++)
    {
        mul[i] = 5*(i+1);
        printf("5 X %d = %d\n",i+1, mul[i]);
            }
    

    return 0;
}