#include<stdio.h>
#include <stdlib.h>
//Verilen 2 sayıdan büyük olan sayı küçük sayıya bölünerek bölüm ve kalanı bulan fonksiyonu yazınız. (Sayıları alma ve bölüm/kalan sonuçları yazdırma işlemleri “main” içinde yapılacaktır.)
void bolme(int x, int y, int *res, int *mod){
    if(x<y){
        *res=y/x;
        *mod=y%x;
    }

    else if (x>y){
        *res=x/y;
        *mod=x%y;
    }
}
int main(){

    int a,b,*sonuc,*mod;
    sonuc=(int*)malloc(sizeof(int));
    mod=(int*)malloc(sizeof(int));

    printf("ilk sayiyi giriniz:");
    scanf("%d",&a);
    printf("Ikincisini giriniz:");
    scanf("%d",&b);

    bolme(a,b,sonuc,mod);

    printf("Bolum: %d",*sonuc);
    printf("\n kalan :%d",*mod);

}