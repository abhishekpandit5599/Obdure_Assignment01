// WAP to find the reverse of a 4 digit number and compare it to the original number

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

// Output
// Case 1:
// Enter the value of N : 1221
// Yes both are same

// Case 2:
// Enter the value of N : 2345
// Not same