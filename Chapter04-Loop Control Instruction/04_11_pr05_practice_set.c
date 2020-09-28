#include<stdio.h>

 
 // Welcome to Paritosh's Visual Studio


int main(){
    int sum=0, i, n ;

    printf("Enter the number --> ");
    scanf("%d",&n);

for(i = 0 ;  i<=n ; i++){
    sum += i ;
}
printf("The value of sum(1 to %d)is = %d \n", n, sum );
    return 0;
}