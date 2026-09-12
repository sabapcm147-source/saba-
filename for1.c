#include <stdio.h>

int main() {
    int n,sum=0;
    printf("take input n=");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        sum=sum+i ;
    }
    printf("print sum:%d",sum);
    

    return 0;
}
