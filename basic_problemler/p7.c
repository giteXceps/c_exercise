#include<stdio.h>

int main(){

            int sayi1, sayi2, sayi3, ortalama;

            printf("Ortalamasini almak istediginiz 3 tam sayiyi sira ile giriniz:");
            scanf("%d",&sayi1);
            scanf("%d",&sayi2);
            scanf("%d",&sayi3);

            ortalama=(sayi1+sayi2+sayi3)/3;

            printf("Girdiginizi sayilarin ortalamasi:%d" ,ortalama);

    return 0;
}