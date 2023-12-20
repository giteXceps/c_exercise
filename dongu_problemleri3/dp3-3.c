#include<stdio.h>
//harshad sayi kontrolü
int main(){
    
    int sayi, sayikayit, toplam, basamak;

    printf("Sayi giriniz: ");
    scanf("%d", &sayi);
    sayikayit=sayi;
    
    for(;sayi!=0;){

        basamak=sayi%10;
        toplam+=basamak;
        sayi/=10;

    }
    
    int sonuc=sayikayit%toplam;

    if(sonuc==0){
        printf("\nGirilen sayi Harshad sayidir!");
    }
    else if(sonuc!=0){
        printf("\nGirilen sayi Harshad degildir!");
    }
}