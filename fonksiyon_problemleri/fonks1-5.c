#include<stdio.h>
//taban ve us degeri verilen ustel fonksiyonu donduren fonksiyon

int ustelHesapla(int taban,int us){
    int i, sonuc=1;
    for (i = 0; i < us; i++){
        sonuc*=taban;
    }
    return sonuc;
}

int main(){

    int taban,us;

    printf("Ustel fonksiyonun taban degeri: ");
    scanf("%d",&taban);
    printf("Ustel fonksiyonun us degeri: ");
    scanf("%d",&us);

    printf("%d^%d=%d",taban,us,ustelHesapla(taban,us));
}