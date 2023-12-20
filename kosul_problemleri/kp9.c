#include <stdio.h>

int main(){

    double sayi1, sayi2, sayi3, sayi4;

    printf("Sirasiyla 4 sayi giriniz.");
    scanf("%lf %lf %lf %lf",&sayi1,&sayi2,&sayi3,&sayi4);

    double ortalama=(sayi1+sayi2+sayi3+sayi4)/4;
    printf("Girdiginiz sayilarin ortalamasi= %.2lf\n",ortalama);

    printf("Ortalamadan buyuk sayilar:");

    if(sayi1>ortalama){
        printf(" %.0lf",sayi1);
    }
    if(sayi2>ortalama){
        printf(" %.0lf",sayi2);
    }
    if(sayi3>ortalama){
        printf(" %.0lf",sayi3);
    }
    if(sayi4>ortalama){
        printf(" %.0lf",sayi4);
    }

    printf("\nOrtalamadan kucuk sayilar:");

    if(sayi1<ortalama){
        printf(" %.0lf",sayi1);
    }
    if(sayi2<ortalama){
        printf(" %.0lf",sayi2);
    }
    if(sayi3<ortalama){
        printf(" %.0lf",sayi3);
    }
    if(sayi4<ortalama){
        printf(" %.0lf",sayi4);
    }
}