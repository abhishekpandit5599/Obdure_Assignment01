#include<stdio.h>
void withOutVariable(int ,int);
void withVariable(int, int);

// This is the logic of swap two numbers with out variable
void withOutVariable(int x, int y){
    x += y;
    y = x-y;
    x -= y;
    printf("Value X : %d\n",x);
    printf("Value Y : %d\n",y);
}

// This is the logic of swap two numbers with variable
void withVariable(int x, int y){
    int temp = x;
    x = y;
    y = temp;
    printf("Value X : %d \n",x);
    printf("Value Y : %d\n",y);
}

void main(){
    int x,y;
    printf("Enter the value of X : ");
    scanf("%d",&x);
    printf("Enter the value of Y : ");
    scanf("%d",&y);

    printf("With out variable swap \n");
    withOutVariable(x,y);
    printf("With variable swap \n");
    withVariable(x,y);
}