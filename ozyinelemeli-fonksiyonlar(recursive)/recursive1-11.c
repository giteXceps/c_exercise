#include<stdio.h>
#include<stdlib.h>
//verilen sayinin kaç basamakli oldugunu bulan fonksiyon

int kacBasamak(int n){
    int basamak=0;
    if (n==0){
        return basamak;
    }
    else{
        basamak=1+kacBasamak(n/10);
    }
    return basamak;
}

int main(){
    int sayi;
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&sayi);
    if(sayi==0){
        printf("Girdiginiz %d sayisi, 1 basamaklidir. \n",sayi);
    }
    else{
        int basamak=kacBasamak(sayi);
        printf("Girdiginiz %d sayisi, %d basamaklidir. \n",sayi,basamak);
    }
}