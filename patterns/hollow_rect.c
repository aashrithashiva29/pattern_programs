#include <stdio.h>

int main()
{
    int r,c,i,j;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i==0 || i==r-1 || j==0 || j==c-1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    
    return 0;
}

/*
input:- 3 5    
output:-                                                              
* * * * *                                                            
*       *                                                            
* * * * *
*/ 