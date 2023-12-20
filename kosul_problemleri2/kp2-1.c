#include<stdio.h>

int main(){
    int fiyat;

    printf("Lutfen urun fiyatini girin: ");
    scanf("%d", &fiyat);
    if(fiyat<100){
        printf("Urun fiyatiniz: %d",fiyat+20);
    }
    else{
        printf("100 lira veya uzeri alisveris yaptiginiz icin kargo ucretsiz!");
    }
}