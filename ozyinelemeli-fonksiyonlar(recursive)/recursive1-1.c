#include<stdio.h>
#include<stdlib.h>
//1 ile n arasindaki sayilari yazdiran recursive function
void sayiYazdir(int a, int n){
    if (n==a-1){
        return;
    }
    printf("%d ",a);
    sayiYazdir(a+1,n);
}

int main(){
    int sayi;
    printf("Sayi giriniz: ");
    scanf("%d",&sayi);
    sayiYazdir(1,sayi);
}