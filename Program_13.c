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