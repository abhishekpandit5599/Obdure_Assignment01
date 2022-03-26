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