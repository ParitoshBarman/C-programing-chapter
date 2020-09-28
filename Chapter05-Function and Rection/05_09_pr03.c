#include <stdio.h>

// Welcome to Paritosh's VS code

float force(float mass);

int main()
{

    int m;
    printf("Enter the value of mass in kg --> ");
    scanf("%d", &m);

    printf("The value of force is %0.2f newtown \n", force(m));

    return 0;
}

float force(float mass)
{
    float result = mass * 9.8;
    return result;
}