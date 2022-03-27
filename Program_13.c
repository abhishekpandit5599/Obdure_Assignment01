/* Two numbers are entered through the keyboard. WAP to find the value of one number
raised to the power of another.*/

#include<stdio.h>

void main(){
    int x,y,result=1;

    printf("Enter the value of X : ");
    scanf("%d",&x);
    printf("Enter the value of Y : ");
    scanf("%d",&y);

    for(int i=1; i<=y; i++){
        result *=x;
    }

    printf("Value : %d",result);
}

// Output
// Case 2:
// Enter the value of X : 2
// Enter the value of Y : 3
// Value : 8

// Case 2:
// Enter the value of X : 3
// Enter the value of Y : 4
// Value : 81
