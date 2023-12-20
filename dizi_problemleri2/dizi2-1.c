#include<stdio.h>

int main(){
    int dizi[10]={19,3,15,7,11,9,13,5,17,1};

    for(int i=0;i<10;i++){
        printf("%d  ",i);
        printf("%d  ",dizi[i]);
        for(int j=0;j<dizi[i];j++)
        printf("*");
        printf("\n");
    }
}