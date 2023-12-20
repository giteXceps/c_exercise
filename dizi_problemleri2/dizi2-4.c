#include<stdio.h>

int main(){
    int n;

    printf("Kac elemanli bir dizi yazacaksiniz?: ");
    scanf("%d",&n);

    int dizi[n];

    for(int i=0;i<n;i++){
    printf("Sayi giriniz: ");
    scanf("%d",&dizi[i]);
    }

    int x;

    printf("Dizide kac kez tekrar ettigini ogrenmek istediginiz sayi nedir?: ");
    scanf("%d",&x);

    int sayac=0;

    for(int i=0;i<n;i++){
        if(x==dizi[i]){
            sayac++;
        }
    }

    printf("Dizide %d karakterinden %d adet vardir.",x,sayac);

}