//  WAP that interchanges the odd and even elements of an array.

#include<stdio.h>

void interChange(int arr[],int n){
    int temp;
    for(int i=0; i<n; i+=2){
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
    printf("Display Array\n");
    displayArray(arr,n);
}

void displayArray(int arr[],int n){
    for(int i=0; i<n; i++){
        printf("%d \n",arr[i]);
    }
}

void main(){
    int arr[100],n;
    printf("Enter the array size :");
    scanf("%d",&n);
    printf("Enter the Array Element :");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    interChange(arr,n);
}

// Output

// Enter the array size :8
// Enter the Array Element :1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// Display Array
// 2 
// 1 
// 4 
// 3 
// 6 
// 5 
// 8 
// 7 