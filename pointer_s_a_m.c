#include <stdio.h>
void s_a_m(double x[],int n,double *sum,double *avg,double *min)
{
    int i;
    *sum=0;
    *min=x[0];
    for(i=0;i<n;i++){
        *sum=*sum+x[i];
    
    if(x[i]<*min){
        *min=x[i];
    }
    }
    *avg=*sum/n ;
}
int main() {
    
    double sum,avg,min;
    
    double x[]={8.5,22.0,15.5,42.0,11.0};
    int n=5;
    s_a_m(x,n,&sum,&avg,&min);
    printf("print sum=%lf\n",sum);
     printf("print average=%lf\n",avg);
      printf("print min=%lf\n",min);

    return 0;
}
