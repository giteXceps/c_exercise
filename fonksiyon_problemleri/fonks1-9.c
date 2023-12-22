#include<stdio.h>
//verilen sayini faktoriyel degerini donduren fonksiyon

int fact(int n){
    int fact=1;
    for (int i = 1; i <= n; i++){
        fact *=i;
    }
    return fact;
}

int main(){
    int sayi;
    printf("Sayi giriniz: ");
    scanf("%d",&sayi);
    printf("%d",fact(sayi));
}