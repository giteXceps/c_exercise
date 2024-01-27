#include <stdio.h>
#include <stdlib.h>

// asagıdaki kodun çıktısı ne olacaktır? ve yaptıgi is nedir? 
// yaptığı iş bir sayinin basamaklarındaki rakamları toplamaktır, ciktisi=18

int f(int a)
{
    if (a < 1)
        return 0;
    else
        return (a % 10) + f(a / 10);
}

int main()
{
    int sayi = 396;
    int x = f(sayi);
    printf("%d", x);
}