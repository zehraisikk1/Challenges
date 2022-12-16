// create a pointer
#include "stdio.h"
#include "stdlib.h"
void swapMachine(int *a,int *b,int *c){
    int d ;
    d=*a;
    *a=*b;
    *b=*c;
    *c=d;
}
int main()
{
    int a=10,b=11,c=12;
    int *pa =&a;
    int *pb =&b;
    int *pc =&c;
    printf("a : %d.......%d\nb : %d.......%d\nc : %d.......%d",*pa,pa,*pb,pb,*pc,pc);
    swapMachine(pa,pb,pc);
    printf("\na : %d.......%d\nb : %d.......%d\nc : %d.......%d",*pa,pa,*pb,pb,*pc,pc);

    return 0;
}
