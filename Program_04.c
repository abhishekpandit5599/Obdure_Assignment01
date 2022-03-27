// WAP to find the sum of the digits of a 4 digit number

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

// Output

// Enter the value of N : 2345
// Digit Sum :  14 