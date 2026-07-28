#include <stdio.h>

double average(double  x[],int n){
int i;
double s=0;
double avg;
for(i=0;i<n;i++){
s=s+x[i] ;

} 
avg=s/n ;
return avg;
}
int main() {
double x[]={10.5,20.0,15.5,30.0,25.0};
int n=5;
double avg;
avg=average(x,n) ;
printf("print the average=%lf",avg);
return 0;
}
