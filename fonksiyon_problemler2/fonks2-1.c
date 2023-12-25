#include<stdio.h>
#include<stdlib.h>
//Tanımlanan bir diziyi yazdiran fonksiyon
void diziYazdir(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int main(){

    int dizi[]={1,2,3,4,5};
    int elemansayisi=sizeof(dizi)/sizeof(int); //dizinin eleman sayisini hesaplayan kod

    printf("Dizinin elaman sayisi %d\nElemanlari: ",elemansayisi);
    diziYazdir(dizi,elemansayisi);
}