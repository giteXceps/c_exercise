#include<stdio.h>

int main(){

    int toplam, sayi;

    printf("Ilk sayiyi giriniz:");
    scanf("%d",&sayi);
    toplam=sayi;
    printf("Ikinci sayiyi giriniz:");
    scanf("%d",&sayi);
    toplam+=sayi;
    printf("Ucuncu sayiyi giriniz:");
    scanf("%d",&sayi);
    toplam+=sayi;

    printf("Sayilarinizin toplami: %d\n", toplam);

}