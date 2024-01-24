#include <stdio.h>
/*                          PROBLEM

    kullanıcıdan karakter girişi iste sürekli
    0 girerse döngüden çık,
    her karakter girdiğinde bu karakter rakam mı harf mi onu yazdıracaksın,
    kaç rakam ve kaç harf girildi

    ascıı:
    a ile z arası harf kucuk harfler 90-122 ve büyük 65-90
    0 ile 9 arası rakam 48-57

*/

int main()
{

    // gerekli olan degisken tanimlamalari
    int kh = 0, bh = 0, rakam = 0;
    char input;

    // dongu baslangici
    for (;;)
    {

        // karakter input alma
        printf("\nKarakter giriniz(Cikis icin 0 girin): ");
        scanf(" %c", &input);

        // karakter 0 ise cikis
        if (input == 48)
        {
            break;
        }

        // karakter kucuk harfse
        else if (input >= 'a' && input <= 'z')
        {
            printf("Kucuk Harf\n");
            kh++; // kucuk harf sayisi artar
            continue;
        }

        // karakter buyuk harfse
        else if (input >= 'A' && input <= 'Z')
        {
            printf("Buyuk Harf\n");
            bh++; // buyuk harf sayisi artar
            continue;
        }

        // karakter rakamsa
        else if (input > '0' && input <= '9')
        {
            printf("Rakam\n");
            rakam++; // rakam sayisi artar
            continue;
        }
    }

    // kac rakam ve harf oldugu hesaplanip yazdirilirsefa
    printf("%d Tane Harf Girdiniz.\n", kh + bh);
    printf("%d Tane Rakam Girdiniz.\n", rakam);
}