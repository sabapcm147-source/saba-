#include <stdio.h>

int main() {
    //  C code to identify the large number
    int a,b,c,large;
    
    printf("take input a:");
    scanf("%d",&a);
    printf("\ntake input b:");
    scanf("%d",&b);
    printf("\ntake input c:");
    scanf("%d",&c);
    if ((a>b)&&(a>c))
    {    large=a;
        printf("\nprint a is the largest number:%d",large);
    }
    
     else if ((b>a)&&(b>c))
    {    large=b;
        printf("\nprint b is the largest number:%d",large);
    }
    
    else
    {    large=c;
        printf("\nprint c is the largest number:%d",large);
    }
    
    
    
    return 0;
}
