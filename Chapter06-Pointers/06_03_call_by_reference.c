#include<stdio.h>

 
 // Welcome to Paritosh's VS code

void wrong_swap(int a , int b);
void swap(int *a , int *b);

int main(){
    
int a=3, b=4;

    printf("The value of a and b is before swap %d and  %d\n",a,b);

   //  wrong_swap(a,b);      // will not work due to call by value 


  swap(&a, &b);      // will work due to call by reference

    printf("The value of a and b is after swap %d and  %d\n",a,b);

    


    return 0;
}

void wrong_swap(int a , int b){
int temp ;
temp = a;
a = b;
b = temp;
}





void swap(int *a , int *b){

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;


}
