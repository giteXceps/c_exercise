#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    
    int matris[10][2];
    int i,j;

    for(i=0;i<10;i++){
        matris[i][0]=i+1;
    }

    for(j=0;j<10;j++){
        matris[j][1]=pow((j+1),2);
    }

    for(i=0;i<10;i++){
        for(j=0;j<2;j++){
            printf("%d ",matris[i][j]);
        }
        printf("\n");
    }
}