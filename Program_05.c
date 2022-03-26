#include<stdio.h>
int addNewNumber(int);

int addNewNumber(int n){
    int rem,result=0,addNum;
    if(n>0){
        result = addNewNumber(n/10);
        rem = n%10;
        addNum = rem +1 == 10 ? 0 : rem+1;
        result = result * 10 + addNum;
    }
    return result;
}

void main(){
    int n;
    printf("Enter the value of N : ");
    scanf("%d",&n);
    printf("New Number : %d \n",addNewNumber(n));
}