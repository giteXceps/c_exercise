#include<stdio.h>

int main(){

    int n;

    printf("Kac elemanli bir dizi yazacaksiniz?: ");
    scanf("%d",&n);

    int dizi[n];

    for(int i=0;i<n;i++){
    printf("Sayi giriniz: ");
    scanf("%d",&dizi[i]);
    }

    int x;
    printf("Dizinizde aramak istediginiz sayi nedir?: ");
    scanf("%d",&x);

    for(int i=0;i<n;i++){
        if(dizi[i]==x){
            printf("Sayiniz %d. siradaki sayi ile eslesmektedir!\n",i+1);
        }
    }
}