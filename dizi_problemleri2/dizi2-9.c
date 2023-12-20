#include<stdio.h>

int main(){

    int sayilar[14]= {20,60,45,42,23,24,26,125,66,55,145,50,30,40};

    for(int i=0;i<14;i++){
        if(sayilar[i]%2==0){
            sayilar[i]+=1;
        }
    }

    for(int i=0;i<14;i++){
        printf("%d ",sayilar[i]);
    }
}