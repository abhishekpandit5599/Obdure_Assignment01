/* Write a program that prints the numbers from 1 to 100. But for multiples of three print
“Obdure” instead of the number and for the multiples of five print “Infotech”. For
numbers which are multiples of both three and five, print “ObdureInfotech” */

#include<stdio.h>

void main(){
    for (int i=1; i<=100; i++){
        if(i%3 ==0)
            printf("Obdure \n");
        else if(i%5 ==0)
            printf("Infotech \n");
        else if(i%3 ==0 && i%5 ==0)
            printf("ObdureInfotech \n");
        else
            printf("%d \n",i);
    }
}

// Output
// 1 
// 2
// Obdure
// 4
// Infotech
// Obdure
// 7
// 8
// Obdure
// Infotech
// 11
// Obdure
// 13
// 14
// Obdure
// 16
// 17
// Obdure
// 19
// Infotech
// Obdure
// 22
// 23
// Obdure
// Infotech 
// 26
// Obdure
// 28
// 29
// Obdure
// 31
// 32
// Obdure
// 34
// Infotech
// Obdure
// 37
// 38
// Obdure 
// Infotech
// 41
// Obdure
// 43
// 44
// Obdure
// 46
// 47
// Obdure
// 49
// Infotech
// Obdure 
// 52
// 53
// Obdure
// Infotech
// 56
// Obdure
// 58
// 59
// Obdure
// 61
// 62
// Obdure
// 97
// 98
// Obdure
// Infotech