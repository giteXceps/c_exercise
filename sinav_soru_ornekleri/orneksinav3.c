#include<stdio.h>
#include<stdlib.h>

int main(){
    /*
    Girilen n sayisi için; NxN'lik bir matris oluşturup bu matrise 1'den n^2'ye kadar sayilari yazdiriniz.
    Her bir matris satirinin toplamini matrisi yazdirdiktan sonra ekrana yazdiran programi yaziniz.
    ÖRN N=3 icin:

    1 2 3
    4 5 6
    7 8 9
    1. satir toplami = 6
    2. satir toplami = 21
    3. satir toplami = 45
    */
   
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