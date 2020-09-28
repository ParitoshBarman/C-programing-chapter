#include<stdio.h>

 
 // Welcome to Paritosh's VS code


int occarence(char *st, char c){
  char *ptr = st;
int count = 0;

  while (*ptr!='\0')
  {
      if (*ptr == c)
      {
         count++;
      }
      
      ptr++;
  }

  return count;
  

}

int main(){
    char st[] = "Paaaaaritosh";

   int p; 
   p = occarence(st, 'a');

   printf("Occrunces = %d\n", p);

    return 0;
}