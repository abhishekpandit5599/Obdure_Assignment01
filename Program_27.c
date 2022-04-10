/* WAP to find if the number to be searched is present in the array and if yes, then
display the number of times it appears. */

#include<stdio.h>

void searchItem(int arr[], int n, int item){
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i] == item){
            printf("Address of Item = %d\n",i);
            count++;
        }
    }
    printf("Total apperear time = %d",count);
}

void main(){
    int arr[100],n,item;
    printf("Enter the array size :");
    scanf("%d",&n);
    printf("Enter the element of array \n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the Search Item : ");
    scanf("%d",&item);
    searchItem(arr,n,item);
}

// output
// Enter the array size :10
// Enter the element of array 
// 1
// 2
// 3
// 4
// 1
// 2
// 5
// 6
// 7
// 8
// Enter the Search Item : 1
// Address of Item = 0
// Address of Item = 4
// Total apperear time = 2