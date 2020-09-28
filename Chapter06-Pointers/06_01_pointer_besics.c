#include <stdio.h>

// Welcome to Paritosh's VS code

int main()
{

    int p = 45;
    int q = 76;
    int i = 8;
    int *j;
    j = &i;      // j will now store the address of i

    printf("Address of i is = %u\n",&i);
    printf("Value of i is = %d\n",i);

    printf("Address of j is = %u\n",&j);
    printf("Value of j is = %d\n",j);

    printf("Address of i is = %u\n",j);
      printf("Value of i is = %d\n",*(&i));

      printf("Address of i is = %d\n",*(&j));

      







 printf("Value of p is = %d\n",*(&p));
  printf("Address of p is = %u\n",&p);
 

 printf("Value of q is = %d\n",*(&q));
  printf("Address of q is = %u\n",&q);
 



printf("%d\n\n",*j);



    return 0;
}