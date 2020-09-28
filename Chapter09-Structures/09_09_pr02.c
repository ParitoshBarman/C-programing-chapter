#include<stdio.h>

 
 // Welcome to Paritosh's VS code

struct vactor
{
    int x;
    int y;
};


struct vactor sumVactor(struct vactor v1, struct vactor v2){
struct vactor result ;

result.x = v1.x + v2.x ;
result.y = v1.y + v2.y ;

return result;
}

int main(){
    
struct vactor v1, v2, sum;

v1.x = 4;
v1.y = 9;

printf("X dim is %d   and Y dim is :%d\n", v1.x, v1.y);

v2.x = 5;
v2.y = 4;

printf("X dim is %d   and Y dim is :%d\n", v2.x, v2.y);



sum = sumVactor(v1, v2);




printf("Value of the result of  X dim is %d   and Y dim is :%d\n", sum.x, sum.y);


    return 0;
}