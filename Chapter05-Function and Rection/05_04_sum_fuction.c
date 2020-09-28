#include<stdio.h>

 
 // Welcome to Paritosh's VS code



//sum is a function which takes a and b as a input and returns and integer as a output 
int sum(int a, int b);   // Function prototype declaretion 


int main(){
    int c;

  c = sum(2,5);   // Function call

  printf("The value of c is %d\n\n",c); 
    return 0;
}


int sum( int a, int b){

    int result;
    result = a + b;
     return result;

}