#include <stdio.h>

int main() {
    //  C code to identify prime number
    int n,prime=1,q,i;
    printf("take input n:");
    scanf("%d",&n);
    
    
   if(n<=1){
       printf("\nthe input is invalid");
   }
    else if(n>1){
       for(i=2;i<=n;i++){
           q=n%i;
       
       if(q==0)
       {
          prime=0; 
          break;
       }
       }
   }
  
   
       
    if(prime=1){
        printf("\nthe number is  prime");
    }    
      else{  
     printf("\nthe number is  prime:%d",prime);
}
    return 0;
}
