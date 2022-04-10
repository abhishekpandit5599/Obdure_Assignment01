// WAP to pick up the largest number from any 5X5 matrix.

#include<stdio.h>

void displayMatrix(int arr[5][5]){
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}

// find Max function
int findMaximum(int arr[5][5]){
    int maximum = arr[0][0];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(maximum < arr[i][j])
            {
                maximum = arr[i][j];
            }
        }
    }
    printf("Maximum Number =  %d ", maximum);
}

int main()
{
    int arr[5][5];
    printf("Enter the elements of matrix \n");
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    displayMatrix(arr);

    findMaximum(arr);
    return 0;
}

// Output
// Enter the elements of matrix
// 12
// 21
// 31
// 45
// 54
// 21
// 22
// 13
// 31
// 33
// 56
// 65
// 99
// 84
// 51
// 25
// 75
// 54
// 56
// 23
// 73
// 34
// 9
// 62
// 32
// 12      21      31      45      54
// 21      22      13      31      33
// 56      65      99      84      51
// 25      75      54      56      23
// 73      34      9       62      32
// Maximum Number =  99
