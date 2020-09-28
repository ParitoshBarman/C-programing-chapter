#include<stdio.h>

 
 // Welcome to Paritosh's VS code

void revers(int *arr , int n){
    int temp;

    for (int i = 0; i < (n/2); i++)
    {
      temp = arr[i];
      arr[i]= arr[n-i-1];
      arr[n-i-1] = temp;

    }
    
}





int main(){
    int arra [] = {1,2,3,4,5,6,7};
    revers(arra, 7);

    for (int i = 0; i < 7; i++)
    {
printf("The value of %d the eliments is %d \n",i+1, arra[i]);
    }
    


    return 0;
}