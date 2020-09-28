#include<stdio.h>

 
 // Welcome to Paritosh's VS code

void display(int two_d_array[3][5],  int size[]){


for (int p = 0; p < size[0]; p++)
{
    for (int q = 0; q < size[1]; q++)
{
  printf(" %d ", two_d_array[p][q]);
}

  printf("\n");
}



}




int main(){
    
    int size[]={3,5};
int two_d_array[ size[0]][size[1]];

for (int i = 0; i < size[0]; i++)
{
for (int j = 0; j < size[1]; j++)

{
    printf("Enter the %d,%d value --> ", i+1, j+1);
   scanf("%d",&two_d_array[i][j]); 
}    
}


display( two_d_array, size);


    return 0;
}