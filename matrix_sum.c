#include <stdio.h>

int main() {
    int matA[3][3];
    printf(" take input a matrix \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&matA[i][j]);
        }
    }
    printf("%d",matA[3][3]);
    int matB[2][2];
    printf(" take input b matrix \n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&matB[i][j]);
        }
    }
    printf("%d",matB[3][3]);
    int summat[3][3];
    for(int i=0;i<3;i++){
        
    for(int j=0;j<3;j++){
    summat[i][j]=matA[i][j]+matB[i][j];
    printf("\n print sum:%d",summat[i][j]);

    }
    printf("\n");
    }
    
    return 0;
}
