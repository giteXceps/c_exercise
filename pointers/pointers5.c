#include<stdio.h>
#include <stdlib.h>
//Parametre olarak verilen 3 sayıdan en büyük ve en küçüğünü bulan fonksiyonu yazınız. En büyük ve en küçük sayıları main içinde yazdırınız.

void maxMin(int *min, int *max, int a, int b, int c){
    *max=a;
    *min=a;

    if (b>*max){
        *max=b;
    }
    else{
        *min=b;
    }
    if (c>*max){
        *max=c;
    }
    else{
        *min=c;
    }
}

int main(){
    int a,b,c,*max,*min;
    max=(int*)malloc(sizeof(int));
    min=(int*)malloc(sizeof(int));

    printf("Sirasiyla 3 sayi giriniz: \n");
    scanf("%d %d %d",&a, &b, &c);

    maxMin(min,max,a,b,c);
    printf("Max: %d, Min: %d",*max,*min);
}