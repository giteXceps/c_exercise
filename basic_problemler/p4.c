#include <stdio.h>

int main () {

    int kisa, uzun, alan, cevre ;

    printf("Alanini hesaplayacaginiz sayinin uzun kenarini giriniz:");
    scanf("%d",&uzun);
    printf("Alanini hesaplayacaginiz sayinin kisa kenarini giriniz:");
    scanf("%d",&kisa);

    alan=uzun*kisa;
    cevre=(uzun+kisa)*2;
    printf("Alani:%d\n", alan);
    printf("Cevresi:%d\n", cevre);
    
    return 0;
}