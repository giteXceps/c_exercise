#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int toplam1=0,toplam2=0,n;
    printf("Kaca kac bir matris olusturmak istersiniz?: ");
    scanf("%d",&n);
    int matris[n][n];

    srand(time(NULL));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            matris[i][j]=rand()%100;
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

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                toplam1+=matris[i][j];
            }
        }
    }
    printf("Yukarida olusturulan %dX%d'lik rastgele matrisin;\n",n,n);
    printf("1. Kosegen toplami: %d\n",toplam1);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j==n-1){
                toplam2+=matris[i][j];
            }
        }
    }
    printf("2. Kosegen toplami: %d\n",toplam2);
}