#include<stdio.h>
//ham fiyati ve kdv orani verilen urunun fiyatini donduren fonksiyon

double fiyatHesapla(double kdv,double ham){  
    double fiyat=(ham/100)*(100+kdv);
    return fiyat;
}

int main(){

    double kdv,ham;

    printf("Urunun ham fiyatini girin: ");
    scanf("%lf",&ham);
    printf("\nKDV oranini girin (%%): ");  
    scanf("%lf",&kdv);

    printf("Urunun KDV dahil fiyati: %.2lf lira",fiyatHesapla(kdv,ham));

}