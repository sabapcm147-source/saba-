#include<stdio.h>
int main()
{
    int n,limit,i;
    printf("take input n:");
    scanf("%d",&n);
    printf("\n take input limit:");
    scanf("%d",&limit);
    
        for(i=1;i<=n;i+=2){
            if(n>=limit){
           printf("\n%d",i);
            }
        }

     return 0;
    
}
