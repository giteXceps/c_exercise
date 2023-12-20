#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int n;
    printf("NxN'lik matris için n degeri giriniz: ");
    scanf("%d",&n);

    int matris[n][n], sayi=1,toplam=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            matris[i][j]=sayi;
            sayi++;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",matris[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            toplam+=matris[i][j];
        }
        printf("%d. satir toplami = %d\n",i+1,toplam);
    }
}