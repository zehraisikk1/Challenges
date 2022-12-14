// Online C compiler to run C program online
#include <stdio.h>
int main(){
 int i,j,k,n;
 printf("Enter tne number of rows :");
 scanf("%d", &n);

 for(i=1; i<=n; i++)
 {
    for(j=i; j<=n; j++)
    {
        printf("  ");
    }
    for(k=1; k<=i*2-1; k++)
    {
        printf("Akif");
    }
    printf("\n");
 }    
    
    return 0;
}

