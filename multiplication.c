#include <stdio.h>

int main() {
    //  C code for multiplication table
    int n,M,i;
    printf("take input n:");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
     M=n*i;
     printf("%d*%d=%d\n",n,i,M);
    }
    

    return 0;
}
