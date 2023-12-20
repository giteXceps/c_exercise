#include<stdio.h>

int main(){
    double i,n,toplam=0, sayi;
    printf("Kaç tane sayinin ortalamasini almak istiyorsunuz?: ");
    scanf("%lf",&n);

    printf("Sayilarinizi sira ile giriniz:\n");

    for(i=1;i<=n;i++){
        scanf("%lf",&sayi);
        toplam+=sayi;
    }
    printf("%.2lf",toplam/n);
}