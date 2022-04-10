#include<stdio.h>

void main(){
    int arr[100],i=0,positive=0,negative=0,zero=0;
    printf("Enter the number if stop it then enter the q \n");

    while(1){
        scanf("%d",&arr[i]);
        if(arr[i]>=1){
            positive++;
        }else if(arr[i]<=-1){
            negative++;
        }else if(arr[i]==0){
            zero++;
        }else{
            break;
        }
        i++;
    }

    printf("Positive : %d \nNegative : %d \nZero : %d \n",positive,negative,zero);
}