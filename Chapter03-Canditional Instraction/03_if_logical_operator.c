#include<stdio.h>

 
 // Welcome to Paritosh's Visual Studio


int main(){
    int age ;
    int vipPass = 0;
   //  vipPass = 1;

    printf("\n Enter your age ---> ");
    scanf("%d",&age);


    if(( age <=90 && age>=18) || !(vipPass==1)){

        printf("\n Your are avabe 18 and bellow 90 you can drive \n\n");
    }

 else{
     printf("\n You cannot drive \n\n");
     
 }

    return 0;
}