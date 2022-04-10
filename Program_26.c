/* WAP to find out in a[25] how many are positive, how many are negative, how many are
even and how many are odd. */

#include<stdio.h>

void allTypeCounting(int arr[]){
    int positive=0,negative=0,even=0,odd=0;
    for(int i=0; i<25;i++){
        if(arr[i] >= 0 && arr[i]%2==0){
            positive++;
            even++;
        }
        else if(arr[i] < 0 && arr[i]%2==0){
            negative++;
            even++;
        }
        else if(arr[i] > 0 && arr[i]%2!=0){
            positive++;
            odd++;
        }
        else{
            negative++;
            odd++;
        }
    }
    printf("Positive = %d \nNegative =%d \nEven = %d \nOdd = %d \n",positive,negative,even,odd);
}

void main(){
    int arr[25];
    printf("Enter the Array Elements \n");
    for(int i=0; i<25;i++){
        scanf("%d",&arr[i]);
    }
    allTypeCounting(arr);
}

// output
// Enter the Array Elements
// 52
// -52
// -45
// -21
// -12
// 21
// 30
// 20
// 258
// 85
// -5
// -6
// -10
// 205
// 27
// 25
// 42
// 32
// -12
// 0
// 22
// -87
// 65
// -45
// 36
// Positive = 15 
// Negative =10 
// Even = 14 
// Odd = 11 