
// WAP to find the reverse of a 4 digit number

#include<stdio.h>
int reverse(int);

int reverse(int n){
    int rem,result=0;
    while (n>0){
        rem = n%10;
        n /= 10;
        result = result *10 +rem;
    }
    return result;
}

void main(){
    int n;
    printf("Enter the value of N : ");
    scanf("%d",&n);
    printf("Reverse Digit %d \n",reverse(n));
}

// Output

// Enter the value of N : 2396
// Reverse Digit 6932 
