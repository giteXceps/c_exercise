#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    
    int a[2][2], i, j;

    printf("Olusturulacak 2X2 matrisin ;\n");

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("[%d].satir ve [%d].sutununda olmasini istediginiz sayiyi giriniz:",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}