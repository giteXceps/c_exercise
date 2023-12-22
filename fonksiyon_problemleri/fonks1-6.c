#include<stdio.h>
//asal sayi kontrolu yapan fonksiyon

int asalmi(int n){

    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }

    return 1;
}

int main(){

    int sayi;
    printf("Sayi giriniz: ");
    scanf("%d",&sayi);

    if(asalmi(sayi)==0){
        printf("\n%d, asal degildir.",sayi);
    }
    else{
        printf("\n%d, asaldir.",sayi);
    }
}