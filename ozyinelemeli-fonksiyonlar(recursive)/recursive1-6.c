#include<stdio.h>
#include<stdlib.h>
// 1-n arasindaki sayilarin toplamini donduren recursive function

int sayilariTopla(int n){
    int toplam;
    if (n==0) return 0;
    toplam=n+(sayilariTopla(n-1));
    return toplam;
}

int main(){
    int sayi;
    printf("Sayi giriniz: ");
    scanf("%d",&sayi);
    printf("1 ie %d sayisi arasindaki sayilarin toplami: %d ",sayi,sayilariTopla(sayi));
}