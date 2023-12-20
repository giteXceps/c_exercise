#include<stdio.h>

int main(){

    int n,i;
    printf("Kaç sayi kullanacaksiniz?: ");
    scanf("%d",&n);

    int sayilar[n];

    for(i=0;i<n;i++){
        printf("Sayi giriniz: ");
        scanf("%d",&sayilar[i]);
    }

    int max=sayilar[0];
    int min=sayilar[0];
    
    int j,k;

    for(j=0;j<n;j++){
        if(min>sayilar[j]){
            min=sayilar[j];
        }
    }
    for(k=0;k<n;k++){
        if(max<sayilar[k]){
            max=sayilar[k];
        }
    }

    printf("Girdiginiz sayilarin en kucugu: %d, en buyugu: %d",min,max);
}