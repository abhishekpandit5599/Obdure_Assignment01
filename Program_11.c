//  WAP to find whether the entered number is prime or not.

#include<stdio.h>

void main(){
    int n,isPrime=1,i=2;
    printf("Enter the Number : ");
    scanf("%d",&n);
    
    while (i*i<=(n)) {
        if(n%i==0){
            isPrime = 0;
            break;
        }else{
            isPrime = 1;
        }
        i++;
    }
    
    if(isPrime){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
}

// Output
// Case 1:
// Enter the Number : 19
// Prime

// Case 2:
// Enter the Number : 155
// Not Prime