#include<stdio.h>

int main(){
    int sayi, kalan, ters;
    printf("Bir sayiyi giriniz: ");
    scanf("%d", &sayi);

    for(;sayi!=0;){

        kalan=sayi%10;
        ters=ters*10+kalan;
        sayi=sayi/10;

    }
    printf("%d",ters);


}