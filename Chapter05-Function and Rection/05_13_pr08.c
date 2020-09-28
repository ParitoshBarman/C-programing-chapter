
#include<stdio.h>

 
 // Welcome to Paritosh's VS code


int main(){
    int n;

    printf("Please enter a number --> ");
    scanf("%d",&n);

    for(int a=0; a<=n; a++){
        for(int x=0; x<4*a-1;x++ ){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}