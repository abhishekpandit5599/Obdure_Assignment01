// WAP to reverse a string

#include<stdio.h>
#include<string.h>

void reverseString(char *string){
    int temp,left=0,right,mid;
    right = strlen(string)-1;
    mid = (left+right)/2;

    for(int i=0;i<=mid; i++){
        temp = string[i];
        string[i] = string[right];
        string[right] = temp;
        right--;
    }
    printf("Reverse String = %s",string);
}

void main(){
    char  string[50];

    printf("Enter the String : ");
    scanf("%s",&string);

    reverseString(string);
}


// Output
// Enter the String : Abhishek
// Reverse String = kehsihbA