/* WAP to delete all vowels from a sentence. Assume that the sentence is not more than
80 chars long. */

#include<stdio.h>
#include <string.h>
// remove vowels
void removeVowels(char *str){
    char store[80]="",j=0;
    int length = strlen(str);

    for(int i=0;i<length; i++){
        if(str[i] =='a' || str[i] =='A' || str[i] =='e' ||str[i] =='E' ||str[i] =='i' ||str[i] =='I' ||str[i] =='o' ||str[i] =='O' ||str[i] =='u' ||str[i] =='U'){
            continue;
        }else{
            store[j] = str[i];
            j++;
        }
    }

    printf("After Remove Vowels \n");
    printf("%s",store);
}

void main(){
    char str[80];
    printf("Enter the string : ");
    gets(str);

    removeVowels(str);
}

// Output

// Enter the string : my name is abhishek sharma
// After Remove Vowels 
// my nm s bhshk shrm