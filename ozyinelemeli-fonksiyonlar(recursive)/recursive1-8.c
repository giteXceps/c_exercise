#include<stdio.h>
#include<stdlib.h>
//girilen sayinin tam bolenlerini ekrana yazdiran recursive function

void bolenYazdir(int a, int n){
    if (n==a)  //sonucu bulduktan sonra donguyu kaldirmak icin
    return;
    if (n%a==0)
    printf("%d\n",a);   //bölen varsa yazdiriyoruz
    bolenYazdir(a+1,n);  //giris degeri olusturup tekrar calistiriyor
}

int main(){
    int sayi;
    printf("Bir tam sayi giriniz: ");
    scanf(" %d",&sayi);
    printf("\nTam bolenleri:\n");
    bolenYazdir(1,sayi);  //recursive function'un ilk sekli cagirdigimiz

}
