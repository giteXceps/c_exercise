#include <stdio.h>
#include <stdlib.h>
// l'den 9'a kadar olan sayıları, her sayının karesini ve her sayının faktöriyelini bulup 9x3 boyutunda bir matrise yerleştiren programı yazmız.
// Faktöriyel bulma işlemi ayrı bir fonksiyon kullanılarak yazılacaktır.
//(İlk sütunda sayı, ikinci sütunda karesi, üçüncü sütunda sayının faktöriyeli olmalıdır.)

int fact(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int matris[9][3];

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 0)
                matris[i][j] = i + 1;

            if (j == 1)
                matris[i][j] = matris[i][0] * matris[i][0];

            if (j == 2)
                matris[i][j] = fact(matris[i][0]);
        }
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", matris[i][j]);
        }
        printf("\n");
    }
}