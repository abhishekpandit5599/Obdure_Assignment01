#include<stdio.h>
int armstrong(int);

int armstrong(int n){
    int rem,result=0;
    while (n>0){
        rem = n%10;
        n /= 10;
        result = result + (rem*rem*rem);
    }
    return result;
}

void main(){
    int n;
    printf("Enter the value of N : ");
    scanf("%d",&n);
    armstrong(n) == n ? printf("Yes Armstrong") : printf("Not armstrong");
}