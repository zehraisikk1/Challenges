#include <stdio.h>

enum ArrayType{INT,FLOAT,CHAR};

typedef struct{
    void *array;
    int size;
    enum ArrayType type;
}Array;

void printArray(Array *arr){
    int i;
    switch (arr->type) {
        case INT:
            for(i=0;i<arr->size;i++){
                printf("%d ",((int *)arr->array)[i]);
            }
            break;
        case FLOAT:
            for(i=0;i<arr->size;i++){
                printf("%f ",((float *)arr->array)[i]);
            }
            break;
        case CHAR:
            for(i=0;i<arr->size;i++){
                printf("%c ",((char *)arr->array)[i]);
            }
            break;
        default:
            break;
    }
}

int main(){
    int a[5] = {1,2,3,4,5};
    float b[5] = {1.1,2.2,3.3,4.4,5.5};
    char c[5] = {'a','b','c','d','e'};
    Array arr1 = {a,5,INT};
    Array arr2 = {b,5,FLOAT};
    Array arr3 = {c,5,CHAR};
    printArray(&arr1);
    printf(" ");
    printArray(&arr2);
    printf(" ");
    printArray(&arr3);
    return 0;
    

}

