//Melisa
// pointer

#include<stdio.h>
int main(){
    int sayi1=10,sayi2=20,*p1=&sayi1,*p2=&sayi2;

    printf("Swap: *p1=%d *p2=%d",*p1,*p2);
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
    printf("\n swap: *p1=%d *p2=%d",*p1,*p2);

    return 0;
}  
