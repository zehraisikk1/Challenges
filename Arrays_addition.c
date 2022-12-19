//sum of 2 matrices
#include <stdio.h>
 
int main()
{
   int i, j, k, n, first[10][10], second[10][10], sum[10][10];
 
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &k, &n);
   printf("Enter the elements of first matrix\n");
 
   for (i = 0; i < k; i++)
      for (j = 0; j < n; j++)
         scanf("%d", &first[i][j]);
 
   printf("Enter the elements of second matrix\n");
 
   for (i = 0; i < k; i++)
      for (j = 0 ; j < n; j++)
         scanf("%d", &second[i][j]);
   
   printf("Sum of entered matrices:\n");
   
   for (i = 0; i < k; i++) {
      for (j = 0 ; j < n; j++) {
         sum[i][j] = first[i][j] + second[i][j];
         printf("%d\t", sum[i][j]);
      }
      printf("\n");
   }
 
   return 0;
}

//output:
//Enter the number of rows and columns of matrix
//2
//2
//Enter the elements of first matrix
//1
//2
//3
//4
//Enter the elements of second matrix
//5
//6
//7
//8
//Sum of entered matrices:
//6       8
//10      12


//product of 2 matrices
#include <stdlib.h>
#include<stdio.h>
void main(){
    int row1,column1,row2,column2,i,j,k,a[100][100],b[100][100],mul[100][100];//a[][] for first matrix and b for second matrix b[][]
    
    printf("Enter number of rows of first matrix : ");
    scanf("%d",&row1);
    
    printf("Enter number of columns of first matrix : ");
    scanf("%d",&column1);
    
    printf("Enter number of rows of second matrix : ");
    scanf("%d",&row2);
    
    printf("Enter number of columns of second matrix : ");
    scanf("%d",&column2);
    
    if(column1 != row2){
            printf("The two matrices you entered cannot be multiplied!\n");
            exit(0);
            
    }
    printf("Frist Matrix:\n");
    for(i=0;i<row1;i++){
        for(j=0;j<column1;j++){
            printf("Enter element a [%d][%d] : ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("Second Matrix:\n");
    for(i=0;i<row2;i++){
        for(j=0;j<column2;j++){
            printf("Enter element a [%d][%d] : ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("Multiplication of matrices:\n");
    if(column1 == row2){
        for(i=0;i<row1;i++){
            for(j=0;j<column2;j++){
                mul[i][j] = 0;
            }
        }
        
        for(i=0;i<row1;i++){
            for(j=0;j<column2;j++){
                for(k=0;k<row2;k++){  //as row2 = column1
                    mul[i][j] = mul[i][j] + a[i][k] * b[k][j];
                }
            }
        }
        
        for(i=0;i<row1;i++){
            for(j=0;j<column2;j++){
                printf("%d ",mul[i][j]);
            }
            printf("\n");
        }
        
    }
        
    
}

//output:
//Enter number of rows of first matrix : 2
//Enter number of columns of first matrix : 2
//Enter number of rows of second matrix : 2
//Enter number of columns of second matrix : 2
//Frist Matrix:
//Enter element a [1][1] : 1
//Enter element a [1][2] : 2
//Enter element a [2][1] : 3
//Enter element a [2][2] : 4
//Second Matrix:
//Enter element a [1][1] : 1
//Enter element a [1][2] : 2
//Enter element a [2][1] : 3
//Enter element a [2][2] : 4
//Multiplication of matrices:
//7 10 
//15 22 
 
//output:
//Enter number of rows of first matrix : 2
//Enter number of columns of first matrix : 2
//Enter number of rows of second matrix : 3
//Enter number of columns of second matrix : 4
//The two matrices you entered cannot be multiplied!
