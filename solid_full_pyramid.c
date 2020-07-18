#include <stdio.h>

int main()
{
    int n,i,j,space;
    scanf("%d",&n);
    for(i=1,space=n-1;i<=n;i++,space--){
        for(j=1;j<=space;j++){
            printf("  ");
        }
        for(j=1;j<=(i*2)-1;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

/*

input:- 5
output:- 
        *                                                            
      * * *                                                          
    * * * * *                                                        
  * * * * * * *                                                      
* * * * * * * * *

*/