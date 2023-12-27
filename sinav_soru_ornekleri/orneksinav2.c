#include<stdio.h>
//Girilen 20 sayinin pozitif olanlarini bir diziye aktarip sayilarin ortalamasini ve diziyi yazdiran c programini yazınız:

int main(){

    int arr[20], n, sayac=0, j=0;
    double toplam=0;

    for(int i=0;i<20;i++){
        printf("Sayi giriniz: ");
        scanf("%d",&n);
        if(n>0){
            arr[j]=n;
            toplam+=n;
            sayac++;
            j++;
        }
    }

    for(int i=0;i<sayac;i++){
            printf("%d ",arr[i]);
    }

    printf("\n");
    printf("Sayilarin ortalamasi %lf",toplam/sayac);


}