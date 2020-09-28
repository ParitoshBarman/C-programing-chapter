#include<stdio.h>

 
 // Welcome to Paritosh's VS code


int main(){
  int marks[5];
    int *ptr = &marks[0];
  // int *ptr = marks;




  for (int i = 0; i < 5; i++)
  {
   printf("Enter the value of marks %dth student ---> ",i+1);
   scanf("%d",ptr);
   ptr++;
     }
  
   for (int i = 0; i < 5; i++)
  {
   printf("The marks of %dth student is ---> %d\n",i+1, marks[i]);
  
     }
  
  
  
  
    return 0;
}