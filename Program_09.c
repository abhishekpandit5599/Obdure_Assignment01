#include<stdio.h>

void main(){
    for (int i=1; i<=100; i++){
        if(i%3 ==0)
            printf("Obdure \n");
        else if(i%5 ==0)
            printf("Infotech \n");
        else if(i%3 ==0 && i%5 ==0)
            printf("ObdureInfotech \n");
        else
            printf("%d \n",i);
    }
}