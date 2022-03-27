// WAP to find the area & perimeter of a rectangle

#include<stdio.h>
int area(int,int);
int perimeter(int,int);

// Area of rectangle
int area(int l, int w){
    return (l*w);
}

// Perimeter of rectangle
int perimeter(int l, int w){
    return ((2*l)+(2*w));
}

void main(){
    int l,w;
    printf("Enter the value of L : ");
    scanf("%d",&l);
    printf("Enter the value of W : ");
    scanf("%d",&w);
    printf("Area of rectangle %d \n",area(l,w));
    printf("Perimeter of rectangle %d \n",perimeter(l,w));
}

// Output

// Enter the value of L : 6
// Enter the value of W : 9
// Area of rectangle 54 
// Perimeter of rectangle 30