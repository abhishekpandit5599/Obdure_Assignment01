#include<stdio.h>
int armstrong(int);

int armstrong(int n){
    int rem,result=0;
    while (n>0){
        rem = n%10;
        n /= 10;
        result = result + (rem*rem*rem);
    }
    return result;
}

void main(){
    for(int i=0; i<=500; i++){
        if(armstrong(i) == i){
            printf("%d \n",i);
        }
    }
}