// create a pointer 
// pointer ile ilgili after ve before ornegi yapin
#include<stdio.h>
int main(){
    int sayi1=10;
    int sayi2=20;
    int *p1 = &sayi1;
    int *p2 = &sayi2;

    printf("Swap: *p1=%d *p2=%d\n",*p1,*p2);
    int *temp = p1;
    p1 = p2;
    p2 = temp;
    printf("\nSwap: *p1=%d *p2=%d",*p1,*p2);
    return 0;
}
