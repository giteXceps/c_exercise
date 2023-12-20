#include<stdio.h>    
//onluk to ikilik
int main(){

int onluk, ikilik=0, i=1, temp;

    printf("Onluk tabanda sayiyi giriniz: ");
    scanf("%d", &onluk);

    while (onluk != 0) {

        temp = onluk % 2;
        onluk = onluk / 2;
        ikilik = ikilik + temp * i;
        i = i * 10;

    }

    printf("Girdiginiz sayinin ikilik tabanda karsiligi: %d\n", ikilik);
    
}    
