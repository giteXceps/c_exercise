#include<stdio.h>
#include<stdlib.h>
//Tanımlanan bir diziyi ters cevirip ikisini de yazdiran fonksiyon

void diziYazdir(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

void tersKopya(int kaynak[], int ters[], int n){
    for(int i=0;i<n;i++){
        ters[i]=kaynak[n-1-i];
    }
}

int main(){

    int dizi[]={23,45,678,9};
    int n=sizeof(dizi)/sizeof(int);
    int tersdizi[n];

    printf("Orijinal Dizi: ");
    diziYazdir(dizi,n);
    printf("\n");

    printf("Ters Dizi: ");
    tersKopya(dizi, tersdizi, n);
    diziYazdir(tersdizi,n);
}
