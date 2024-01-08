#include<stdio.h>
#include <stdlib.h>

//Girilen 2 sayıyı sadece pointer değişkenler kullanarak toplayınız.

int main(){

    //int a,b;
    //int *p=&a; 
    //int *q=&b;

    int *p=(int*)malloc(sizeof(int));
    int *q=(int*)malloc(sizeof(int));
    int *toplam=(int*)malloc(sizeof(int));

    if(p==NULL||q==NULL||toplam==NULL){
        printf("Bellekte yer ayrilamadi!");
        return 0;
    }

    printf("1. Sayiyi Girin:");
    scanf("%d",p);
    printf("2. Sayiyi Girin:");
    scanf("%d",q);

    *toplam=*p+*q;
    printf("\nToplam = %d\n",*toplam);
    
    free(p);
    free(q);
    free(toplam);
    
}