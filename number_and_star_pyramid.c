#include <stdio.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(j==i)
                printf("%d",i);
            else{
                printf("%d*",i);
            }
        }
        printf("\n");
    }
    for(i=n;i>0;i--){
        for(j=1;j<=i;j++){
            if(j==i)
                printf("%d",i);
            else{
                printf("%d*",i);
            }
        }
        printf("\n");
    }

    return 0;
}

/*
input :- 5
output:- 
1                                                                                                                                             
2*2                                                                                                                                           
3*3*3                                                                                                                                         
4*4*4*4                                                                                                                                       
5*5*5*5*5                                                                                                                                     
5*5*5*5*5                                                                                                                                     
4*4*4*4                                                                                                                                       
3*3*3                                                                                                                                         
2*2                                                                                                                                           
1  

*/