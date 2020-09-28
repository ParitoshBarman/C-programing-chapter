#include<stdio.h>

 
 // Welcome to Paritosh's VS code


int main(){
    FILE *ptr;
    ptr = fopen("getcdemo.txt", "r");

char c;
c = fgetc(ptr);

while (c != EOF)
{
    printf("%C", c);
    c = fgetc(ptr);
}

fclose(ptr);
printf("\n\n");
    return 0;
}