#include <stdio.h>
#include <stdlib.h>
//Girilen 5 sayıyı bir diziye aktardıktan sonra bu diziyi fonksiyona gönderip 
//dizideki en büyük ve en küçük sayı ile dizi toplamını bulup sonuçları main içinde yazdırınız.
void maxMinBul(int *arr, int *max, int *min){
    *min = arr[0]; 
    *max = arr[0];

    for (int i=0;i<5;i++){

        if (*min > arr[i]){
            *min = arr[i];
            }
        if(*min < arr[i]){
            *max = arr[i] ;
            }
    }
}
void toplamBul(int *arr, int *toplam){
    *toplam=0;
    for(int i=0;i<5;i++){
        *toplam += arr[i];
    }
}

int main(){
    int *sayilar, *max, *min, *toplam;

    sayilar=(int*)malloc(sizeof(int)*5);
    max=(int*)malloc(sizeof(int));
    min=(int*)malloc(sizeof(int));
    toplam=(int*)malloc(sizeof(int));

    for(int i=0;i<5;i++){
        printf("Lütfen %d. sayiyi giriniz: ",i+1);
        scanf("%d",&sayilar[i]);
    }

    maxMinBul(sayilar,max,min);
    toplamBul(sayilar,toplam);
    printf("\nEn kucuk sayi :%d\nEn buyuk sayi :%d\nDizinin toplami :%d",*min,*max,*toplam);
    return 0;

}