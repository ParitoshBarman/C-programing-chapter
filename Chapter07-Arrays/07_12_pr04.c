#include<stdio.h>

 
 // Welcome to Paritosh's VS code


int main(){
    int mul[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter your number --> ");
        scanf("%d",&mul[i]);
    }
    

     for (int i = 0; i < 10; i++)
    {
        printf("%d X 5 = %d\n", mul[i],mul[i]*5);
        
    }


    return 0;
}