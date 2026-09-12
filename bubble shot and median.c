#include <stdio.h>



double med(double x[], int n) {
//using buble shot
int j;
  int i=0;
  double median,temp;
  for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++){
      if(x[j]>x[j+1]){
        temp=x[j];
        x[j]=x[j+1];
        x[j+1]=temp;
      }
    }
  }
  if(n%2 == 0){
  
    median=(x[(n/2)-1 ]+x[n/2])/2 ;
  }
 else if( n%2 !=0){
   
    median=(x[n/2]) ;
  }
  else
  {printf("invalid");
  }
  return median;
}


int main() {
  double x[] = {3, 2, 4, 5};
  int n = 4;
  double median;
  
  median = med(x, n);
  printf("median = %.2f\n", median);
  
  return 0;
}


