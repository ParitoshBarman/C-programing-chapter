#include<stdio.h>

 
 // Welcome to Paritosh's VS code


int main(){
    FILE *Pri;
    Pri = fopen("generated.txt", "w");

    int number = 45;
    fprintf(Pri, "The number is %d\n", number);
    fprintf(Pri, "The number is %d\n", number+45);

    fclose(Pri);


    return 0;
}