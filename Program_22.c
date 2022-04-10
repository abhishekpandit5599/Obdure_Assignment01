// Swap the value of two variables using call by value & by reference.

#include<stdio.h>

void swapCallByValue(int a,int b){
    int temp = a;
    a = b;
    b = temp;
    printf("a = %d and b = %d\n",a,b);
}

void swapCallByRef(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

    printf("a = %d and b = %d\n",*a,*b);
}

void main(){
    int a,b;
    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);
    swapCallByValue(a,b);
    swapCallByRef(&a,&b);
}

// output

// Enter the value of a :5
// Enter the value of b :8
// a = 8 and b = 5
// a = 8 and b = 5