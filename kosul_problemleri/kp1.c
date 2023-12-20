#include <stdio.h>

int main () {

    int sayi;

    printf("Lutfen bir sayi giriniz:");
    scanf("%d",&sayi);

    if (sayi<0) {
        printf("%d Sayisi Negatiftir!",sayi);
    }

    else if (sayi==0){
        printf("%d Sayisi Nötrdür!",sayi);
    }  

    else {
        printf("%d Sayisi Pozitiftir!",sayi);
    }

}