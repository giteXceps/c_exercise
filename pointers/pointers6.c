#include<stdio.h>
#include <stdlib.h>
// Parametre olarak verilen 2 sayının toplamını ve farkını bulan bir fonksiyon yazılacaktır. 
// Sayılar main metodunda kullanıcıdan alınarak fonksiyona gönderilecektir, toplam ve fark sonuçları da main metodunda yazılacaktır.

void toplamFark(int x,int y, int *toplam, int *fark){
    *toplam = x+y;
    *fark = x-y;
}
int main(){
    int a,b;
    int toplam,fark;

    printf("1. sayiyi giriniz:");
    scanf("%d",&a);
    printf("\n2. sayiyi giriniz:");
    scanf("%d",&b);

    toplamFark(a,b,&toplam,&fark);
    printf("Toplam: %d\n",toplam);
    printf("Fark: %d\n",fark);
}