#include <stdio.h>
#include <stdlib.h>
/*
     kullanıcıdan n adet sayı al tek cift bul fonksiyonu yap tek ve cift sayi sayilarini yazdir.
     (global degisken ve [] kullanilmayacaktir)
*/

void tekCiftBul(int *p, int n, int *tek, int *cift)
{ // tek ve cift sayi sayisini bulan fonksiyon

    *cift = 0;
    *tek = 0;

    for (int i = 0; i < n; i++)
    {
        if (*(p + i) % 2 == 0)
        {
            (*cift) += 1;
        }
        else if (*(p + i) % 2 == 1)
        {
            (*tek) += 1;
        }
    }
}

int main()
{
    int n;
    printf("Kac adet sayi gireceksiniz?: "); // kullanıcıdan kac adet sayi girilecegi alinir
    scanf("%d", &n);

    int *pArry = (int *)malloc(sizeof(int) * n); // bellekte degiskenler icin yerler acilir
    int *tek = (int *)malloc(sizeof(int));
    int *cift = (int *)malloc(sizeof(int));

    printf("Sayilari sirasiyla giriniz: \n"); // acilan yerlere degiskenler yerlestirilir
    for (int i = 0; i < n; i++)
    {
        printf("%d. Sayiyi giriniz: ", i + 1);
        scanf("%d", (pArry + i));
    }

    tekCiftBul(pArry, n, tek, cift); // tek ve cift sayi sayisi bulunur

    printf("Dizideki cift sayi sayisi: %d\nDizideki tek sayi sayisi: %d", *cift, *tek); // bulunan degerler yazdirilir

    free(pArry); // bellekte acilan yerler bosaltilir
    free(tek);
    free(cift);
}