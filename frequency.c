int main() {
    int num[10000],n,i,target_num,count=0;
    
    
     printf("take input:");
    scanf("%d",&n);
     for(i=0;i<n;i++){
     
    printf("take input the array numbers:");
    scanf("%d",&num[i]);

     }
     
     printf("take input target_num:");
    scanf("%d",&target_num);
    for(i=0;i<n;i++){
    if(target_num==num[i])
    {
        count++;
    }

    }
    
    
   printf("the number %d appears %d times",target_num,count);

    return 0;
