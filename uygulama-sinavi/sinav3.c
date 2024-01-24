#include <stdio.h>
#include <stdlib.h>
/*
3 4 6 12 15 28
mükemmel olmayani sil -1 yap
mükemmel mi?
dizi yazdir
kendisi dışındaki tam bölenlerin toplamı kendisine eşit olan sayi
6: 1+2+3
*/

void diziYazdir(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
// herhangi bir diziyi yazdiran fonksiyon

int mukemmelSayi(int n)
{
    int toplam = 0, i;

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            toplam += i;
        }
    }

    if (toplam == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
// mukemmel sayi kontrolu yapan fonksiyon

void mukemmelOlmayaniSil(int arr[], int newArr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        int x = arr[i];
        if (mukemmelSayi(x) == 1)
        {
            newArr[i] = x;
        }
        else
        {
            newArr[i] = -1;
        }
    }
}
// mukemmel sayi olmayanlari -1 yapıp yeni bir diziye aktaran fonksiyon

int main()
{
    int dizi[6] = {3, 4, 6, 12, 15, 28};
    int yeniDizi[6];

    printf("Orjinal dizi:\n");
    diziYazdir(dizi, 6);

    printf("\nMukemmeel harici sayilarin silindigi dizi:\n");
    mukemmelOlmayaniSil(dizi, yeniDizi, 6);
    diziYazdir(yeniDizi, 6);
}