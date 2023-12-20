#include<stdio.h>

int main(){
    int i,n,toplam;
    printf("Lütfen bir sayi giriniz: ");
    scanf("%d",&n);
    toplam=0;

    for(i=0;i<n;i++){

        if(i%2==0){
            toplam+=i;
            //printf("%d\n",i); programın doğruluğunu kontrol etmek için kullanıldı
        }

    }

    printf("%d",toplam);
}