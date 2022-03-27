// WAP to find whether the year is leap or not ( Do this with conditional operators)

#include<stdio.h>

void main(){
    int year,isLeapYear;
    printf("Enter the Year : ");
    scanf("%d",&year);
    
    // Logic of Year Leap year or not leap year not
    if((year%4 == 0) && ((year%400 == 0) || (year%100 != 0))){
        isLeapYear = 1;
    }else{
        isLeapYear = 0;
    }

    // display Leap year logic
    if(isLeapYear){
        printf("Yes this %d is Leap Year",year);
    }else{
        printf("No this %d is Not Leap Year",year);
    }
}

// Output
// Case 1:
// Enter the Year : 2004
// Yes this 2004 is Leap Year

// Case 2:
// Enter the Year : 2002
// No this 2002 is Not Leap Year
