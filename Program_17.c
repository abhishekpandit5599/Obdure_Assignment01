/* WAP to find the range of a set of numbers. Orange is the difference between the
smallest and the biggest number in the list. */

#include<stdio.h>

int findRange(int biggest,int smallest){
    return (biggest-smallest);
}

void findNumbers(int arr[],int n){
    int biggest = arr[0];
    int smallest = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
        if(arr[i] > biggest){
            biggest = arr[i];
        }
    }
    printf("Range %d",findRange(biggest,smallest));
}

void main(){
    int arr[100],n;
    printf("Enter the array size : ");
    scanf("%d",&n);
    printf("Enter the array elements \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    findNumbers(arr,n);
}

// output

// Enter the array size : 15
// Enter the array elements 
// 25
// 55
// 12
// 31
// 14
// 41
// 45
// 11
// 8
// 78
// 22
// 65
// 45
// 54
// 22
// Range 70