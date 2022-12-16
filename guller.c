//make a poniter
// Printing variable value meter using pointer.

#include <stdio.h>

int main(){
  int *ptr, gk;
  gk = 20;
  ptr = &gk;    // gk assigns the variable address to the ptr pointer.


  printf("gk variable value: %d", *ptr); // Writes the gk variable value to the screen using a pointer.

  return 0;

  }


//output:
//gk variable value: 20



//
#include <stdio.h>

int main(){

  int *ptr, gk; 
  gk = 20;
  ptr = &gk;    //gk assigns the variable address to the ptr pointer.


  printf("gk variable value: %d\n", gk); // Using the variable name, gk writes the variable value to the screen.
  printf("gk variable value: %d\n", *ptr);  // Writes a gk variable value pointer using a pointer.
  printf("address of the gk variable: %p\n", &gk); // Writes the gk variable address display using the variable reference.
  printf("address of the gk variable: %p", ptr); // Writes the gk variable address to the screen using the pointer name.

  return 0;
}

//output:
//gk variable value: 20
//gk variable value: 20
//address of the gk variable: 0x7ffd0e0a278c
//address of the gk variable: 0x7ffd0e0a278c


//Assigning values to variables via pointers

#include <stdio.h>

int main(){
  int *ptr1, *ptr2, gk1, gk2;

  ptr1 = &gk1; // Assigning the address of the gk1 variable to the ptr1 pointer
  ptr2 = &gk2; // Assigning the address of the gk2 variable to the ptr2 pointer
  gk1 = 112;   // Assigning a value to the gk1 variable
  *ptr2 = 501;  // Assigning a value to the gk2 variable via the ptr2 pointer

  printf("gk1 variable value: %d\n", ptr1);
  printf("gk2 variable value: %d\n", *ptr2);
  printf("gk1 variable address: %p\n", ptr1);
  printf("gk2 variable address: %p", ptr2);

  printf("\n\n");

  printf("address of ptr1 pointer: %p\n", &ptr1);
  printf("address of ptr2 pointer: %p", &ptr2);

  return 0;
}

//output:
//gk2 variable value: 501
//gk1 variable address: 0x7fff3bc91ea0
//gk2 variable address: 0x7fff3bc91ea4

//address of ptr1 pointer: 0x7fff3bc91ea8
//address of ptr2 pointer: 0x7fff3bc91eb0


//printing the alphabet using pointer

#include <stdio.h>

int main()
{
    char alph[27];
    int i;
    char *ptr;
    ptr = alph;     

    for(i=0;i<26;i++)
    {
        *ptr=i+'A';
        ptr++;
    }
    ptr = alph;

    printf("Letters: \n");
    for(i=0;i<26;i++)
    {
       printf(" %c ", *ptr);
        ptr++;
    }
    printf("\n\n");
    return(0);
}

//output:
 //Letters: 
 //A  B  C  D  E  F  G  H  I  J  K  L  M  N  O  P  Q  R  S  T  U  V  W  X  Y  Z 

//Reverse array using pointer

#include <stdio.h>
int main() 
{
   int n, i;
   int *ptr;

   printf("Enter the number of elements : ");
   scanf("%d",&n);
   int dizi[n];
   ptr = &dizi[0];  //It shows the starting address of the ptr array 
   printf("Enter %d numbers: \n",n);
   for(i=0;i<n;i++)
   {
	  printf("%d.element : ",i+1);
	  scanf("%d",ptr); 
	  ptr++;
	} 	

   ptr = &dizi[n - 1];

   printf("\nReverse order of the array:\n");

   for (i = n; i > 0; i--) 
   {
      printf("%d", *ptr);
      ptr--;
      if (i == 1)
     {
      break;
     }
      printf(", ");
   }

  printf("\n\n");

 return 0;
}

//output:
//Enter the number of elements : 5
//Enter 5 numbers: 
//1.element : 112
//2.element : 501
//3.element : 211
//4.element : 406
//5.element : 6

//Reverse order of the array:
//6, 406, 211, 501, 112


// Array inversion example 2

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,*arrays,i;
    printf("Enter the number of elements:");
    scanf("%d", &num);
    arrays = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arrays + i);
    }

    for(i = num-1; i>=0; i--)
    {
        printf("%d|",arrays[i]);

    }
    printf("\n");
    for(i = 0; i < num; i++)
        printf("%d|", *(arrays + i));
    return 0;
}
//output:
//Enter the number of elements:5
//90
//87
//67
//34
//29
//29|34|67|87|90|
//90|87|67|34|29|



//Finding max-min using pointer
#include <stdio.h>
#include <stdlib.h>
#define K 10

int main(){
	int i,min,max;
	int *gk;
	int gul[K];

	printf("Enter %d values:\n",K);

	for(gk=gul;gk<gul+K;gk++){
		scanf("%d",gk);
	}
	max=min=gul[0];
    for(gk=gul+1;gk<gul+K;gk++){
    	if(*gk>max){
    		max=*gk;
		}
		if(*gk<min){
			min=*gk;
		}
	}
	printf("Maximum value of array: %d\n",max);
	printf("Minimum value of array: %d \n",min);

	return 0;

}

//output:
//Enter 10 values:
//23
//65
//78
//123
//456
//978
//1024
//32
//526
//768
//Maximum value of array: 1024
//Minimum value of array: 23 

//days of the week using pointers
#include <stdio.h>
#include <stdlib.h>


int main(){
	char *day[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
	int i;

	do{
		printf("Please enter a value between 1 and 7: \n");
		scanf("%d",&i);		
	}
	while(i<=0 || i>7);

	printf("%d. day of the week is %s",i,day[i-1]);
	return 0;

}

//output:
//Please enter a value between 1 and 7: 
//4
//4. day of the week is Thursday


//Sorting array elements entered with the help of pointers
#include <stdio.h>
int main()
{
   int *a,i,j,k,gk;

   printf("Enter the number of elements:");
   scanf("%d",&k);

   printf("Enter %d numbers:\n",k);
   for(i=0;i<k;i++)
   {
	  printf("%d.element: ",i+1);
	  scanf("%d",a+i);
   }   

   for(i=0;i<k;i++)
   {
    for(j=i+1;j<k;j++)
    {
       if( *(a+i) > *(a+j))
       {
      gk = *(a+i);
      *(a+i) = *(a+j);
      *(a+j) = gk;
       }
    }
   }

   printf("\nSorted shape of elements:\n");

   for(i=0;i<k;i++)
   {
	  printf("%d",*(a+i));
     if (i == k-1)
     {
      break;
     }
      printf(", ");


   }   
  return 0;
}
//output:
//Enter the number of elements:5
//Enter 5 numbers:
//1.element: 67
//2.element: 98
//3.element: 23
//4.element: 45
//5.element: 69

//Sorted shape of elements:
//23, 45, 67, 69, 98





