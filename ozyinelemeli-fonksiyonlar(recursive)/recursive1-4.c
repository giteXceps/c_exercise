#include<stdio.h>
#include<stdlib.h>
// faktoriyel hesaplayan recursive function

int fact(int n){

    if (n==0){
    return 1;}
    if (n==1){
    return 1;}

    int sonuc=n*(fact(n-1));
    return sonuc;
}

int main(){
    int sayi;
    printf("Sayiyi giriniz: ");
    scanf("%d",&sayi);
    printf("\nFaktoriyeli:%d\n",fact(sayi));
}