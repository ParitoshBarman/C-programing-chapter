#include<stdio.h>

 
 // Welcome to Paritosh's VS code


int main(){
     int arra [10];
      
    //      int *ptr = &arra;
    int *ptr = &arra[0];

 ptr = ptr+2;


 if(ptr == &arra[2]){
     printf("These point to same lacation in mamory \n");
 }
else
{
printf("These do not  point to same lacation in mamory \n");
}




    return 0;
}