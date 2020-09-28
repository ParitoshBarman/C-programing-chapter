#include<stdio.h>

 
 // Welcome to Paritosh's Visual Studio


int main(){
    int year ;
     printf("\n\n Enter your year --->  ");
     scanf("%d",&year);


     if (((year % 4 == 0)  && (year % 100 != 0))  ||  (year % 400 == 0))
     {
        printf("\n\n The year is Leaper \n\n");
     }
     
     else
     {
         printf("\n\n The year is not Leaper \n\n");
     }
     

    return 0;
}