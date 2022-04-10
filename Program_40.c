//  WAP which reverses every word in the string.


#include<stdio.h>

// Reverse String
void reverseString(char str[], int beg, int last){
    char temp;
    while(beg<last)
    {
        temp=str[beg];
        str[beg]=str[last];
        str[last]=temp;
        beg++;
        last--;
    }
}

void  main(){
    char str[100];
    int beg, last;


    printf("Enter the string : ");
    gets(str);


    while(str[last]){
        for(last=beg;str[last]&&str[last]!=' ';last++);
        reverseString(str, beg, last-1);
        beg=last+1;
    }
    printf("%s",str);
}

// Output
// Enter the string : this is the best.
// siht si eht .tseb