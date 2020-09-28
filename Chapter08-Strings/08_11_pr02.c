#include <stdio.h>
#include <string.h>

// Welcome to Paritosh's VS code

int main()
{
    char st1[34];
    char st2[34];
    char c;
    char i = 0;

    printf("Enter the value of first string--> ");
    scanf("%s", st1);

    printf("Enter the value of secoend string charecter by charecter--> ");

   

    while (c != '\n')
    {
         fflush(stdin);
        printf("Enter--> ");

        scanf("%c", &c);
      st2[i] = c;
        i++;
    }

    st2[i-1] = '\0';

    printf("The value of the st1 is --> %s\n", st1);
    printf("The value of the st2 is --> %s\n", st2);

    return 0;
}