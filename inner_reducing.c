#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int size = (n*2)-1;
    int a[size][size];
    int start=0,end=(n*2)-2;
    
    while(start<end){
        for(i=start;i<=end;i++)
        {
            for(j=start;j<=end;j++){
                if(i==start || i== end || j==start || j== end )
                    a[i][j]=n;
            }
        }
        n--;
        start++;
        end--;
    }
    a[start][end] = n;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}


/*
input :-3
output:-
3 3 3 3 3
3 2 2 2 3
3 2 1 2 3
3 2 2 2 3
3 3 3 3 3

*/