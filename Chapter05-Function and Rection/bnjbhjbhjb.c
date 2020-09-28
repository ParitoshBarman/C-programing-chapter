#include<stdio.h>

 
 // Welcome to Paritosh's VS code


int main(){
    int i,j;

    printf("Enter a number --> ");
    scanf("%d",&i);

                  //      for ( i ; i >=1; i--)
                  //      {
                  //          for ( j = 1; j < 4*i-1; j++)
                  //          {
                  //              printf("*");
                  //
                  //          }
                  //          printf("\n");
                  //          
                  //      }
                  //

   for (int p=0; p<=i; p++ ){
       for(int k=0; k<=4*p-1; k++){
           printf("*");
       }
       printf("\n");
   }

  


    return 0;
}