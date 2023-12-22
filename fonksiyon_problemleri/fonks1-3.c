#include<stdio.h>
//dairenin alanini ve cevresini 2 farkli fonksiyon iyi yazdirma

double alanHesapla(double r){
    double a=3.14*r*r;  // Alan hesabı yaptık
    return a;
}

double cevreHesapla(double r){
    double c=2*3.14*r;   // Cevre Hesabı Yaptık
    return c;
}

int main(){
    double r;
    printf("Dairenin yaricapini girin: ");
    scanf("%lf",&r);
    printf("Dairenin alani %.2lf br^2, cevresi %.2lf br.",alanHesapla(r),cevreHesapla(r));
}