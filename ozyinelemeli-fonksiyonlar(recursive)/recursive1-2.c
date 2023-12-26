#include<stdio.h>
#include<stdlib.h>
// n ile 1 arasindaki sayilari yazdiran recursive function

void sayiYazdir(int n){
    if (n==0) return;
    printf("%d ",n);
    sayiYazdir(n-1);
}

int main(){
    int sayi;
    printf("Sayi giriniz: ");
    scanf("%d",&sayi);
    sayiYazdir(sayi);
}