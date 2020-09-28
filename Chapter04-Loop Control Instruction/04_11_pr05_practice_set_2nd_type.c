#include<stdio.h>

 
 // Welcome to Paritosh's Visual Studio


int main(){
    int i=0, sum = 0, n ;

    printf("Enter the number --> ");
    scanf("%d",&n);

    while(i<=n){
        
        sum+=i;
        i++;
    }
    printf("The valie of som(1 to %d) is = %d\n",n,sum);

    return 0;
}