#include<stdio.h>

 
 // Welcome to Paritosh's VS code


int main(){
    // fgetc() demo for reading a file
    FILE *ptr;
    //  ptr = fopen("getcdemo.txt", "r");
//  
    //  //   char c = fgetc(ptr);
//  
    //  printf("The value of charcter is %c\n", fgetc(ptr));
    //  printf("The value of charcter is %c\n", fgetc(ptr));
    //  printf("The value of charcter is %c\n", fgetc(ptr));
    //  printf("The value of charcter is %c\n", fgetc(ptr));
    //  printf("The value of charcter is %c\n", fgetc(ptr));
    //  printf("The value of charcter is %c\n", fgetc(ptr));
    //  printf("The value of charcter is %c\n", fgetc(ptr));
    //  printf("The value of charcter is %c\n", fgetc(ptr));
    //  printf("The value of charcter is %c\n", fgetc(ptr));
    //  printf("The value of charcter is %c\n", fgetc(ptr));
    //  printf("The value of charcter is %c\n", fgetc(ptr));


  ptr = fopen("putcdemo.txt", "w");
putc('c', ptr);
putc('c', ptr);
putc('c', ptr);

fclose(ptr);
    return 0;
}