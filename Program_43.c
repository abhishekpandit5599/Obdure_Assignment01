// WAP that will read a line and replace all spaces with "0x20".

#include<stdio.h>
#include <string.h>

// Count every char
void raplaceBlank(char *str){
    int j=0;
    int length = strlen(str);
    char store[80] ="";

    for(int i=0;i<length; i++){
        if(str[i] == ' '){
            store[j] = "0";
            store[j+1] = "x";
            store[j+2] = "2";
            store[j+3] = "0";
            j+=4;
            continue;
        }
        store[j] = str[i];
        j++;
    }
    printf("After Replace\n");
    printf("%s",store);

}

void main(){
    char str[80];
    printf("Enter the string : ");
    gets(str);

    raplaceBlank(str);
}

// Output
// Enter the string : this is the best
// After Replace
// this����is����the����best