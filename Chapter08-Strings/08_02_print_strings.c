#include<stdio.h>

 
 // Welcome to Paritosh's VS code


int main(){
    //  char str[]="PARITOSH";
    char str[] ={'P','A','R','I','T','O','S','H','\0'};

    char *ptr = str;

    while (*ptr != '\0')
    {
       printf("%c",*ptr);
       ptr++;
    }
    

    return 0;
}