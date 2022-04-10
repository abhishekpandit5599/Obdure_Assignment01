// WAP to multiply any two 3x3 matrices.

#include<stdio.h>

// Matrix product
void productMatrix(int arr1[3][3],int arr2[3][3]){
    int arr3[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            arr3[i][j]=arr1[i][j]*arr2[i][j];
        }
    }
    printf("Display After Product Matrix\n");
    displayMatrix(arr3);
}

// display Matrix
void displayMatrix(int arr[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}

void main(){
    int arr1[3][3],arr2[3][3];
    printf("Enter the 1 Matrix Elements \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    
    printf("Display 1 Matrix \n");
    displayMatrix(arr1);

    printf("Enter the 2 Matrix elements \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    
    printf("Display 2 Matrix \n");
    displayMatrix(arr2);
  
    productMatrix(arr1,arr2);
}

// Enter the 1 Matrix Elements
// 11
// 12
// 13
// 21
// 22
// 23
// 31
// 32
// 33
// Display 1 Matrix 
// 11      12      13
// 21      22      23
// 31      32      33
// Enter the 2 Matrix elements 
// 31
// 32
// 33
// 21
// 22
// 23
// 11
// 12
// 13
// Display 2 Matrix 
// 31      32      33
// 21      22      23
// 11      12      13
// Display After Product Matrix
// 341     384     429
// 441     484     529
// 341     384     429
