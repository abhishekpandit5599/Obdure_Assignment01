// WAP accepts only the unique elements in an array.

#include<stdio.h>

int checkFun(int arr[], int i, int temp){
    for(int j=0;j<i;j++){
        if(arr[j] == temp){
            return 0;
        }
    }
    return 1;
}

void main(){
    int arr[100],n,temp,isRight,i=0;
    printf("Enter the size of array :");
    scanf("%d",&n);
    printf("Enter the element of array \n");
    while(i<n){
        scanf("%d",&temp);
        isRight = checkFun(arr,i,temp);
        if(isRight){
            arr[i] = temp;
            i++;
        }else{
            printf("Please enter the unique element\n");
        }
    }
}

// Output

// Case 1: 
// Enter the size of array :6
// Enter the element of array 
// 1
// 2
// 3
// 4
// 5
// 6

// Case 2:
// Enter the size of array :6
// Enter the element of array 
// 1
// 2
// 3
// 2
// Please enter the unique element
// 3
// Please enter the unique element
// 4
// 5
// 6
