#include <stdio.h>
#include <stdlib.h>
// kullanıcıdan alınan 5 sayiyi bir diziye aktardıktan sonra her bir sayinin - + yada 0 olduğunu yazdırınız ayriyetten kaç adet 0 + - olduğunu yazdırınız

int main()
{

    int sayilar[5], poz = 0, neg = 0, notr = 0;

    // Dizi için 5 adet değer döngü ile alınır
    for (int i = 0; i < 5; i++)
    {
        printf("%d. Sayiyi Giriniz: ", i + 1);
        scanf("%d", &sayilar[i]);
    }

    // bir diğer döngü ile sayıların kontrolü yapılır
    for (int i = 0; i < 5; i++)
    {

        if (sayilar[i] < 0)
        {
            printf("%d Negatif\n", sayilar[i]); // sayinin durumu yazdirilir
            neg++;                              // negatif sayilar artirilir
        }

        else if (sayilar[i] == 0)
        {
            printf("%d Notr\n", sayilar[i]); // sayinin durumu yazdirilir
            notr++;                          // notr sayilar artirilir
        }
        // sayi pozitifse
        else if (sayilar[i] > 0)
        {
            printf("%d Pozitif\n", sayilar[i]); // sayinin durumu yazdirilir
            poz++;                              // pozitif sayilar artirilir
        }
    }

    // sayıların durumu ekranda yazdırılır
    printf("\nToplam %d adet negatif, %d adet pozitif ve %d adet notr sayi vardir.\n", neg, poz, notr);
}