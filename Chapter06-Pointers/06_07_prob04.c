#include<stdio.h>

 
 // Welcome to Paritosh's VS code



void sumAndAvg(int a, int b ,int *sum, float *Avg){
     *sum = a+b;
    *Avg = (float)*sum/2;
}

int main(){
    int a ,b, sum;
    float Avg;

    a=3;
    b=6;

sumAndAvg(a,b, &sum,&Avg);

printf("The value of the sum is %d\n",sum);

printf("The value of the Avarege is %f\n",Avg);


    return 0;
}