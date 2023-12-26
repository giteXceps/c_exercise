#include<stdio.h>
#include<stdlib.h>
//10 elemanli bir dizideki en yüksek sayiyi recursive function ile bulan kod

int maxBul(int dizi[],int bas,int son,int max){
    
    if (bas==son){
        return max;
    }
    if (max<=dizi[bas]){
        max=dizi[bas];
    }
    return maxBul(dizi,bas+1,10,max);
}

int main(){
    int dizi[10] = {20, 8, 7, 2, 9, 26, 1, 5, 5, 15};
    printf("%d",maxBul(dizi,0,10,0));
}