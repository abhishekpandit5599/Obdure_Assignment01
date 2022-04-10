/* WAP to obtain the transpose of a 4x4 matrix. The transpose of a matrix is obtained by
exchanging the elements of each row with the elements of the corresponding column. */


#include<stdio.h>

// Transpose Matrix
void transposeMatrix (int arr[4][4]){
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }
}

// display matrix
void displayMatrix(int arr[4][4]){
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}

void main(){
    int arr[4][4];
    printf("Enter the elements of matrix \n");
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    printf("Display Entered Matreix\n");
    displayMatrix(arr);
    printf("Display Transpose Matreix\n");
    transposeMatrix(arr);
}

// Enter the elements of matrix 
// 11
// 12
// 13
// 14
// 21
// 22
// 23
// 24
// 31
// 32
// 33
// 34
// 41
// 42
// 43
// 44
// Display Entered Matreix
// 11      12      13      14
// 21      22      23      24
// 31      32      33      34
// 41      42      43      44
// Display Transpose Matreix
// 11      21      31      41
// 12      22      32      42
// 13      23      33      43
// 14      24      34      44