#include<stdio.h>
#include<stdlib.h>

//Girilen 5 adet sayıyı bir diziye aktardıktan sonra bu diziyi pointer kullanarak tersten yazdırınız.

int main(){

    int dizi[5];

    printf("Lutfen 5 tane sayi giriniz: \n");
    for(int i=0;i<5;i++){
        scanf("%d",&dizi[i]);
    }
    int *pDizi;
    pDizi=&dizi[0];
    for(int i=4;i>=0;i--){
        printf("%d\t",*(pDizi+i));
    }

}