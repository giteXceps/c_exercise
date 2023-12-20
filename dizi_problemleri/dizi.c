#include<stdio.h>

int main(){
   // int ogr[3]={50,70,90},i=0;
   // ogr[1]=80;  // 1. indexi değiştirir
    int i;
    int n;

    printf("Kac deger gireceksiniz?:");
    scanf("%d",&n);

    int ogr[n];

    for(i=0;i<n;i++){
        printf("dizinin %d. elamanini giriniz",i+1);
        scanf("%d",&ogr[i]);
    }

    for(i=0;i<n;i++){
        printf("dizi[%d]=%d\n",i,ogr[i]);
    }
}