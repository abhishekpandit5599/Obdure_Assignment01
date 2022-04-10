// WAP to check whether the entered string is palindrome or not

#include<stdio.h>
#include<string.h>

void reverseString(char *string){
    int left=0,right,mid,flag=1;
    char temp,str[50] ="";

    right = strlen(string)-1;
    mid = (left+right)/2;

    // Store the string value as temp
    int i=0;
    while(i<=right){
        str[i] = string[i];
        i++;
    }
    
    // Logic of reverse stringf
    for(int i=0;i<=mid; i++){
        temp = string[i];
        string[i] = string[right];
        string[right] = temp;
        right--;
    }

    for(int i=0;i<=right;i++){
        if(str[i] == string[i]){
            continue;
        }else{
            flag =0;
        }
    }

    if(flag){
        printf("Yes %s String is Palindrome",str);
    }else{
        printf("No %s String is Not Palindrome",str);
    }
}

void main(){
    char  string[50];

    printf("Enter the String : ");
    scanf("%s",&string);


    reverseString(string);
}

// Output
// case : 1
// Enter the String : AbhihbA
// Yes AbhihbA String is Palindrome

// Case 2:
// Enter the String : Abhishek
// No Abhishek String is Not Palindrome