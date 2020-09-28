#include <stdio.h>

// Welcome to Paritosh's Visual Studio

int main()
{
    int physics, chemistry, math;
    float total;

    printf("Enter physics marks \n");
    scanf("%d", &physics);

    printf("Enter chemistry marks \n");
    scanf("%d", &chemistry);

    printf("Enter math marks \n");
    scanf("%d", &math);

    total = (physics + chemistry + math) / 3;

    if ((total <= 40) || physics < 33 || chemistry < 33 || math < 33)
    {
        printf("\n\n Your total persentage is %f and you are failed \n\n", total);
    }

    else
    {
        printf("\n\n Your total persentage is %f and you are pass  \n\n", total);
    }

    return 0;
}