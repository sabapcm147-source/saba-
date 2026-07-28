#include <stdio.h>
//void is a function which dont return any value rather it changes the valu inside the variable and then goes directly to the main funtion and a pointer goes directly to the address of the variable

void sum_avg(double x [],int n,double *s, double *avg){
    int i;
    
     for (i=0;i<n;i++){
         *s=*s+x[i];
     }
     *avg=*s/n ;
}

int main() {
    double x[]={12.5,14.0,16.5,18.0,20.0};
    double s=0;
    double avg;
    int n=5;
    sum_avg(x,n,&s,&avg);
    printf("print sum=%lf\n",s);
     printf("print average=%lf\n",avg);

    return 0;
}
