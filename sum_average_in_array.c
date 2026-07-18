#include <stdio.h>

int main() {
    // C code for the sum and average of an array
    int num[100],sum=0,n;
    float average;
    printf("take input n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    printf("take input number:");
    
    scanf("%d",&num[i]);
     sum=sum+num[i];
    }
    
     printf("\nprint the sum:%d",sum);
    average=sum/n;
    printf("\nprint the average:%f",average);

    return 0;
}
