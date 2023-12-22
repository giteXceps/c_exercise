#include<stdio.h>
//girilen iki sayinin arasinda kalan tum sayilarin toplamini donduren foksiyon

int aratoplam(int sayi1, int sayi2){
    int toplam=0;
    sayi1++;
    for(;sayi1<sayi2;sayi1++){
        toplam+=sayi1;
    }
    return toplam;
}

int main(){
    int sayi1,sayi2;
    printf("Sirasiyla iki sayi giriniz:\n");
    scanf("%d %d",&sayi1,&sayi2);   
    printf("Sayilarin ara toplami: %d",aratoplam(sayi1,sayi2));
}