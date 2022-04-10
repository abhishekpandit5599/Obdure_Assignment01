// Implement Linear search and Binary search

#include<stdio.h>

// Linear Search
void linearSearch(int arr[],int n, int item){
    int i;
    for(int i=0; i<n; i++){
        if(arr[i] == item){
            printf("Address of Item = %d\n",i);
        }
    }
    if(i==n){
        printf("Not Fount");
    }
}

// Binary Search 
void binarySearch(int arr[],int n, int item){
    int beg=0,end=n,mid;
    while(beg<end){
        mid = (beg+end)/2;

        if(arr[mid]>item){
            end = mid;
        }else if(arr[mid] < item){
            beg = mid;
        }
        else{
            printf("Address of Item = %d\n",mid);
            break;
        }
    }
}

void main(){
     int arr[100],n,item;
    printf("Enter the array size :");
    scanf("%d",&n);
    printf("Enter the element of array \n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the search item :");
    scanf("%d",&item);
    
    printf("Linear Search \n");
    linearSearch(arr,n,item);

    printf("Binary Search \n");
    binarySearch(arr,n,item);
}

// Output
// Enter the array size :10
// Enter the element of array 
// 10
// 12
// 16
// 18
// 19
// 25
// 26
// 32
// 42
// 42
// Enter the search item :32
// Linear Search 
// Address of Item = 7
// Binary Search
// Address of Item = 7