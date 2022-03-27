
//  WAP to find the factorial value of any number.

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

// Output
// Case 1:
// Enter the Number : 5
// Factorial is 120 

// Case 2:
// Enter the Number : 6
// Factorial is 720 
