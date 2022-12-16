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

//
#include <stdio.h>
#include <conio.h>

int main()
{
    int i,j,k;
 
for (i = 1; i<=4; i++){
    for(k = 0; k <4-i; k++){
        printf(" ");
    }
    for(j = 0; j<i; j++){
        printf("A");
        break;
    } 
    printf(" ");
    for(j = 1; j<i; j++){
        printf("k");
        break;
    } 
    printf(" ");
    for(j = 2; j<i; j++){
        printf("i");
        break;
    }
    printf(" ");
    for(j = 3; j<i; j++){
        printf("f");
        break;
    }
    printf("\n");
}
    return 0;
}

//
#include <stdio.h>
#include <conio.h>

void main()
{
    int i,j,k;
for (i = 1; i<=5; i++){
    for(k = 0; k <5-i; k++){
        printf(" ");
    }
    for(j = 0; j<i; j++){
        printf("A");
    } 
    printf(" ");
    for(int c = 0; c<i; c++){
        printf("k");
    }
    printf(" ");
    for(int c = 0; c<i; c++){
        printf("i");
    }    
    printf(" ");
    for(int c = 0; c<i; c++){
        printf("f");
    }

    printf("\n");
}
    
}

