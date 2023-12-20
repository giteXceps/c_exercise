#include<stdio.h>

int main(){

    int sayi, kalan, ters, sayikayit;

    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&sayi);
    sayikayit=sayi;

    for(;sayi!=0;){

        kalan=sayi%10;
        ters=ters*10+kalan;
        sayi=sayi/10;

    }

    if(ters==sayikayit){
        printf("\nGirilen sayi palindromdir.");
    }
    else{
        printf("\nGirilen sayi polindrom degildir");
    }
}