#include<stdio.h>
#include<stdlib.h>
//10 terimli dizinin en buyuk ve kucuk teriminin toplamini recursive functions yardımı ile bulan program

int maxBul(int dizi[],int bas,int son,int max){
    
    if (bas==son){
        return max;
    }
    if (max<=dizi[bas]){
        max=dizi[bas];
    }
    return maxBul(dizi,bas+1,10,max);
}

int minBul(int dizi[],int bas,int son,int min){
    
    if (bas==son){
        return min;
    }
    if (dizi[bas]<min){
        min=dizi[bas];
    }
    return minBul(dizi,bas+1,10,min);
}

int main(){
    int dizi[10] = {20, 8, 7, 2, 9, 26, 1, 5, 5, 15};
    printf("%d",minBul(dizi,0,10,dizi[0])+maxBul(dizi,0,10,dizi[0]));
}