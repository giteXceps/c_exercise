#include<stdio.h>
#include<time.h>



int main(){
    int sayi,tahmin;

    sayi=rand();
    
    for(;;){
        printf("Tahmininizi girin: ");
        scanf("%d",&tahmin);

        if(sayi==tahmin){
            printf("Tahmininiz dogru!\nCikis yapiliyor..."); 
            return 0;
        }

        else if(sayi<tahmin){
            printf("Tahmininiz bulmaniz gereken sayidan buyuk.\n");
        }

        else if(sayi>tahmin){
            printf("Tahmininiz bulmaniz gereken sayidan kucuk.\n");
        }
    }
}