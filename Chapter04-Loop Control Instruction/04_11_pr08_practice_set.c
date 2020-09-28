#include<stdio.h>

 
 // Welcome to Paritosh's Visual Studio


int main(){
    int a=1, n, factorial=1;

    printf("Enter the number --> ");
    scanf("%d",&n);

    for(a; a<=n; a++){
        factorial *= a ;
    }
printf("The value of Factorial/Multeplication(1 to %d) is = %d\n",n, factorial);
    return 0;
}