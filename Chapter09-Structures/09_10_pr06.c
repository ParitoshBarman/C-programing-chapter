#include<stdio.h>

 
 // Welcome to Paritosh's VS code

typedef struct comolex{
    int real;
    int complex;
} comp;

void display(comp c){
    printf("The value of real part is %d\n", c.real);
    printf("The value of complex part is %d\n", c.complex);
}

int main(){
    comp comps[5];
    for (int i = 0; i < 5; i++)
    {
    printf("Enter the real value for number %d --> ", i+1);
    scanf("%d",&comps[i].real);

        printf("Enter the complex value for number %d --> ", i+1);
    scanf("%d",&comps[i].complex);
    }


    for (int i = 0; i < 5; i++)
    {
display(comps[i]);
    }
    
    
    

    return 0;
}