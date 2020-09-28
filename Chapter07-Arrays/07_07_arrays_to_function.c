#include<stdio.h>

 
 // Welcome to Paritosh's VS code



    //   void printArray(int *ptr, int n){
    //       for (int i = 0; i < n; i++)
    //           {
    //   printf("The value of eliments %d is %d\n", i+1, *(ptr + i)) ;   
    //   }

    // 
    // 
    //   }


       void printArray(int ptr[], int n){
         for (int i = 0; i < n; i++)
         {
       printf("The value of eliments %d is %d\n", i+1, *(ptr + i)) ;   
       }

       ptr[2] = 5555;  //   This value will be change in "array" array of main as well as
    
       }

int main(){
    
int array[] = {21,454,46,485,454,56,45};
printArray(array, 7);

printf("%d\n\n", array[2]);

    return 0;
}