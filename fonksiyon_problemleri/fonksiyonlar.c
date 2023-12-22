#include<stdio.h>
//fonksiyonlar ornek ve calismalar

/*

//fonksiyon ile hata yazdırma
void hatayibas(int hata){
    printf("Hata kodu %d",hata);
}

int main(){
    int sayi;
    printf("Sayi giriniz");
    scanf("%d",&sayi);

    if (sayi<0){
        hatayibas(404); // negatif girdigimizi kontrol etmek icin kullanilir
    }
    else{
        printf("Girilen sayi %d\n",sayi);
    }
}

*/
/*

//fonksiyon ile toplama
int topla(int sayi1, int sayi2){
    return (sayi1+sayi2);
}

int main(){

    int sayi1;
    int sayi2;

    scanf("%d %d",&sayi1,&sayi2);
    int toplam=topla(sayi1,sayi2);
    printf("%d",toplam);

}
*/


//faktöriyel hesaplama (fonksiyon ile)
int fact(int sayi){
    int fact=1;
    for(;sayi>0;sayi--){
        fact*=sayi;
    }
    return fact;
}

int main(){

    int n;
    printf("Sayi giriniz: ");
    scanf("%d",&n);
    printf("%d",fact(n));

}

