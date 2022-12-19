#include <stdio.h>
int main()
{

    int a,b;
    int arr[8][6]={{2,2},{3,3,3,3},{4},{5,5,5},{6,6,6,6,6},{7,7},{8,8,8,8},{9,9,9,9,9,9}};
    for (a=0;a<=7;a++){
        for(int b=0;b<=5;b++){
                printf("%d ",arr[a][b]);
                            
        }
        printf("\n");
    }
    return 0;
}
