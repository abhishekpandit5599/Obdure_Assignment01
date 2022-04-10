//  WAP to generate all combinations of 1, 2 and 3.
#include<stdio.h>

void combination(){
    int i,j,k;
    for(i = 1; i <= 3; i++)  
    {  
        for(j = 1; j <= 3; j++)  
        {  
            for(k = 1; k <= 3; k++)  
            {  
                if( i != j && i != k && j != k)  
                    printf("%d %d %d\n", i, j, k);  
            }  
        }  
    }  
}

void main(){
    combination();
}

// output
// 1 2 3
// 1 3 2
// 2 1 3
// 2 3 1
// 3 1 2
// 3 2 1