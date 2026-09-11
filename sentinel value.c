#include <stdio.h>

int main(void) {
    float total=0;
    float expense;
    unsigned int counter=0;
    printf("take input the expense ,0 to end:");
     scanf("%f",&expense);
    while(expense!=0)
        {
            total=total+expense ;
            counter=counter+1 ;
             printf("take input the expense ,0 to end:");
     scanf("%f",&expense);
            
        }
      printf("print the total and counter value :%f %d",total,counter);

    return 0;
}
