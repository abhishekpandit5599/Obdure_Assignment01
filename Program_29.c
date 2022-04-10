// Implement the Selection Sort, Bubble Sort and Insertion Sort.
#include<stdio.h>

void displayArray(int arr[],int n){
    for(int i=0; i<n; i++){
        printf("%d,",arr[i]);
    }
}

// selection sort
void selectionSort(int arr[],int n){
    
}

void main(){
     int arr[100],n;
    printf("Enter the array size :");
    scanf("%d",&n);
    printf("Enter the element of array \n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    selectionSort(arr,n);
    buubbleSort(arr,n);
    insertionSort(arr,n);
}