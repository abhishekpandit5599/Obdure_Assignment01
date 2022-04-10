// WAP that will read a line and delete from it all the occurrences of the word 'the'

#include<stdio.h>
#include <string.h>

// remove Occurrences
void removeOccurrences(char *str){
    char store[80]="",j=0;
    int length = strlen(str);

    for(int i=0;i<length; i++){
        if(str[i] =='t' && str[i+1] =='h' && str[i+2] =='e'){
            i += 2;
            continue;
        }else{
            store[j] = str[i];
            j++;
        }
    }

    printf("After Remove Occurrences \n");
    printf("%s",store);
}

void main(){
    char str[80];
    printf("Enter the string : ");
    gets(str);

    removeOccurrences(str);
}

// Output
// Enter the string : this is the best.
// After Remove Occurrences 
// this is  best.