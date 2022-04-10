// WAP to find the maximum number and second maximum in an array.

#include<stdio.h>

void findMaxMin(int arr[],int n){
    int min = arr[0];
    int max = arr[0];
    for(int i=1; i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("Min = %d and Max = %d",min,max);
}

void main(){
    int arr[100],n;
    printf("Enter the Array size :");
    scanf("%d",&n);
    printf("Enter the Array elemnts \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    findMaxMin(arr,n);
}

// output

// Enter the Array size :8
// Enter the Array elemnts 
// 1
// 2
// 0
// 7
// 3
// 88
// 52
// 10
// Min = 0 and Max = 88