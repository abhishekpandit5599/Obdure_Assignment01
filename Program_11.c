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