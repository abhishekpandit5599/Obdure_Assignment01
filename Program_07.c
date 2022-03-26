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
    int n,reverseNum;
    printf("Enter the value of N : ");
    scanf("%d",&n);
    reverseNum = reverse(n);
    
    reverseNum == n ? printf("Yes both are same") : printf("Not same");
}