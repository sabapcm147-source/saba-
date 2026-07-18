#include <stdio.h>

int main() {
    // Write C code for factorial
    int n,fact=1,i;
    printf("take input n:");
    scanf("%d",&n);
    if(n>0){
        for(i=1;i<=n;i++){
            fact*=i;
        }
        printf("print the answer:%d",fact);
    }
    
    else if(n==0){
        fact=1;
        printf("print the answer:%d",fact);
    }
    else{
        printf("invalid input");
    }

    return 0;
}
