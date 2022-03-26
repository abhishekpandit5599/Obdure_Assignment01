#include<stdio.h>

void main(){
    int n,fac=1;

    printf("Enter the Number : ");
    scanf("%d",&n);

    for(int i=n; i>1; i--){
        fac *= i;
    }

    printf("Factorial is %d ",fac);
}