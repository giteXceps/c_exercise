#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int n;
    printf("NxN'lik matris için n degeri giriniz: ");
    scanf("%d",&n);

    int matris[n][n], sayi=1;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            matris[i][j]=sayi;
            sayi++;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(matris[i][j]<10){
                printf("%d  ",matris[i][j]);
            }
            else{
                printf("%d ",matris[i][j]);
            }
        }
        printf("\n");
    }
}