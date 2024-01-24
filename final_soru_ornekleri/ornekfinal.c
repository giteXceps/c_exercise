#include <stdio.h>
#include <stdlib.h>
// kullanicidan alinan bir sayinin tam bolenleri toplaminin sayinin kendisine eşit olup olmadigini yazdiriniz.
int bolenToplami(int n)
{
    int toplam = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            toplam = toplam + i;
        }
    }
    return toplam;
}
int main()
{
    int sayi;

    printf("Sayi giriniz: ");
    scanf("%d", &sayi);
    int sonuc = bolenToplami(sayi);

    if (sonuc == sayi)
    {
        printf("%d sayisi tam bolenlerinin toplamina esittir.", sayi);
    }

    else
    {
        printf("%d sayisi tam bolenleri toplamina esit degildir.", sayi);
    }
}