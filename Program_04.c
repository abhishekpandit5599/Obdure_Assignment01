#include<stdio.h>
int digitSum(int);

int digitSum(int n){
    int rem,result=0;
    while (n>0){
        rem = n%10;
        n /= 10;
        result += rem;
    }
    return result;
}

void main(){
    int n;
    printf("Enter the value of N : ");
    scanf("%d",&n);
    printf("Digit Sum :  %d \n",digitSum(n));
}