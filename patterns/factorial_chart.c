#include <stdio.h>

int main()
{
    int n,i=1,j;
    scanf("%d",&n);
    while(i<=n){
        for(j=1;j<i;j++){
            printf("%d",j);
            printf("*");
        }
        printf("%d",j);
        i+=1;
        printf("\n");
        
    }
    
    return 0;
}

/*
input: 4
output:
1                                                                                                                                             
1*2                                                                                                                                           
1*2*3                                                                                                                                         
1*2*3*4

*/