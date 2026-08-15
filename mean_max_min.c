#include <stdio.h>

int main() {
    double num[100],mean,sum=0;
    int n;
    double max;
    double min;
    

    printf("take input n:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
         printf("take input number:");
         scanf("%lf",&num[i]);
       sum=sum+num[i] ;
       max=num[0] ;
    if (num[i]>max)
    {
        max=num[i];
    }
    min=num[0];
    
     if (num[i]<min)
    {
        min=num[i];
    }
    
    }
    mean=sum/n;
    
    printf("\nprint mean:%lf",mean);
    printf("\nprint max:%lf",max);
    printf("\nprint min:%lf",min);


    return 0;
}
