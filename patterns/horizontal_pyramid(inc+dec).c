#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=(n*2)-1;i++)
    {
        if(i<=n)        
            for(j=1;j<=i;j++)
                printf("%d ",j);
        else
            for(j=1;j<=(n*2)-i;j++)
                printf("%d ",j);
        printf("\n");
    }
    
    return 0;
}

/*
input:- 4
output:-
1
1 2
1 2 3
1 2 3 4
1 2 3
1 2
1

*/