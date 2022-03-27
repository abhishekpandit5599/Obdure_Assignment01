/* If the ages of A, B and C are input through the keyboard, write a program to determine
the youngest of the three */

#include<stdio.h>

void main(){
    int x,y,z;
    printf("Enter the value of X : ");
    scanf("%d",&x);
    printf("Enter the value of Y : ");
    scanf("%d",&y);
    printf("Enter the value of Z : ");
    scanf("%d",&z);
    
    if(x<y && x<z)
        printf("X is younger");
    else if(y<x && y<z)
        printf("Y is younger");
    else if(z<y && z<x)
        printf("Z is younger");
}

// Output
// Case 1:
// Enter the value of X : 16
// Enter the value of Y : 18
// Enter the value of Z : 25
// X is younger

// Case 2:
// Enter the value of X : 25
// Enter the value of Y : 18
// Enter the value of Z : 19
// Y is younger

// Case 3:
// Enter the value of X : 25
// Enter the value of Y : 19
// Enter the value of Z : 16
// Z is younger
