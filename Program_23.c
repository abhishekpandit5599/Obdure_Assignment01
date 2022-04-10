/* Calculate Factorial, Sum of digits & Reverse a number using recursive and non
recursive functions */

#include<stdio.h>

// All operation using recursive
void recursive(int n){
    
    // factorial
    printf("Recursive factorial = %d \n",factorial(n));

}

// Recursive Factorial function
int factorial(int n){
    if(n!=0){
        return factorial(n-1) *n;
    }
    return 1;
}




// All operation usin non recursive
void nonRecursive(int n){
    // factorial
    printf("Non Recursive factorial = %d \n",factorialNonRec(n));

    // Sum of digits
    printf("Non Recursive Sum of Digits = %d \n",digitSumNonRec(n));

    // Reverse of Digits
    printf("Non Recursive Reverse of Digits = %d \n",reverseNonRec(n));
}

// factorial non recursive
int factorialNonRec(int n){
    int fac=1;
    while(n!=0){
        fac = fac*n;
        n--;
    }
    return fac;
}

// Non Recursive Sum of Digits function
int digitSumNonRec(int n){
    int rem,result=0;
    while (n>0){
        rem = n%10;
        n /= 10;
        result += rem;
    }
    return result;
}

// Non Recursive reverse Digits
int reverseNonRec(int n){
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
    printf("Enter the Number :");
    scanf("%d",&n);
    recursive(n);
    nonRecursive(n);
}

// output

// Enter the Number :15
// Recursive factorial = 2004310016 
// Non Recursive factorial = 2004310016 
// Non Recursive Sum of Digits = 6 
// Non Recursive Reverse of Digits = 51