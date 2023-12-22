#include<stdio.h>
//Girilen sayının Güçlü Sayı olup olmadığını tanımladığınız faktöriyel 
//fonksiyonunu kullanarak bulunuz.
//(Güçlü Sayı: basamak değerlerinin faktöriyellerinin toplamına eşit olan sayı. 145=1!+4!+5!)

int fact(int n){
    int fact=1;
    for (int i = 1; i <= n; i++){
        fact *=i;
    }
    return fact;
}
//factoriyel hesaplayan fonksiyon

int basamakSayisi(int n){
    int count=0;
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}
//sayinin basamak sayisini bulan fonksiyon

int basamakDegeri(int n){
    int sonuc;
    sonuc=0;
    sonuc=n%10;
    return sonuc;
}
//sayinin son basamagini bulan fonksiyon

int main(){

    int sayi,toplam=0,sayikayit;

    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
    sayikayit=sayi;

    for(int i=basamakSayisi(sayi);i!=0;i--){
        toplam+=fact(basamakDegeri(sayi));
        sayi=sayi/10;
    }

    if(toplam==sayikayit){
        printf("Girdiginiz sayi guclu sayidir.");
    }
    else{
        printf("Girdiginiz sayi guclu sayi degildir.");
    }
}