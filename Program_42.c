/* WAP that converts all lowercase characters in a given string to its equivalent uppercase
character. */

#include<stdio.h>
#include <string.h>

void convert(char *str){
    int length = strlen(str);

    for(int i=0; i<length; i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i] = str[i] - 32;
        }
    }
    printf("After convert\n");
    printf("%s",str);
}

void main(){
    char str[80];
    printf("Enter the string : ");
    gets(str);

    convert(str);
}

// Output
// Enter the string : this is The Best
// After convert
// THIS IS THE BEST