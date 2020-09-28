#include<stdio.h>

 
 // Welcome to Paritosh's Visual Studio


int main(){
    float celsius ;

    printf("Please enter the the tempareture in celsius---> ");
    scanf("%f",&celsius);

    printf("\n \n The temparature is--> %f  degree fahrenheit \n\n", ((celsius * 9 / 5)+32));

    return 0;
}