// WAP is a program to add two 6x6 matrices.


#include<stdio.h>

// Add Two Matrix
void addMatrix(int arr1[6][6],int arr2[6][6]){
    int arr3[6][6];
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("Display Added Matrix\n");
    displayMatrix(arr3);
}

void displayMatrix(int arr[6][6]){
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}

void main(){
    int arr1[6][6],arr2[6][6];
    printf("Enter the 1 Matrix elements \n");
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    
    printf("Display 1 Matrix \n");
    displayMatrix(arr1);

    printf("Enter the 2 Matrix elements \n");
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    
    printf("Display 2 Matrix \n");
    displayMatrix(arr2);

    
    addMatrix(arr1,arr2);
}

// Enter the 1 Matrix elements 
// 11
// 12
// 13
// 14
// 15
// 16
// 21
// 21
// 22
// 23
// 24
// 25
// 26
// 31
// 32
// 33
// 34
// 35
// 36
// 41
// 42
// 43
// 44
// 45
// 46
// 51
// 52
// 53
// 54
// 55
// 56
// 61
// 62
// 63
// 64
// 65
// 66
// Display 1 Matrix 
// 11      12      13      14      15      16
// 21      22      23      24      25      26
// 31      32      33      34      35      36
// 41      42      43      44      45      46
// 51      52      53      54      55      56
// 61      62      63      64      65      66
// Enter the 2 Matrix elements
// 11
// 12
// 13
// 14
// 15
// 16
// 21
// 22
// 23
// 24
// 25
// 26
// 31
// 32
// 33
// 34
// 35
// 36
// 41
// 42
// 43
// 44
// 45
// 46
// 51
// 52
// 53
// 54
// 55 
// 56
// 61
// 62
// 63
// 64
// 65
// 66
// Display 2 Matrix 
// 11      12      13      14      15      16
// 21      22      23      24      25      26
// 31      32      33      34      35      36
// 41      42      43      44      45      46
// 51      52      53      54      55      56
// 61      62      63      64      65      66
// Display Added Matrix
// 22      24      26      28      30      32
// 42      44      46      48      50      52
// 62      64      66      68      70      72
// 82      84      86      88      90      92
// 102     104     106     108     110     112
// 122     124     126     128     130     132
