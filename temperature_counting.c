#include <stdio.h>

int main(void) {
    float temp,max=-99;
    unsigned  int count=0;
    

    printf("take input temperature,-99 to end:");
    scanf("%f",&temp);
    while (temp!=-99){
        if(temp>30){
            count=count+1 ;
        }
         if(temp>max)   {
             max=temp;
         }
         printf("take input temperature,-99 to end:");
    scanf("%f",&temp);
        
        }

      printf("%d %f",count,max);
    return 0;
}
