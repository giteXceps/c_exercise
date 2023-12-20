#include<stdio.h>
int main(){

int adet;
char isim[30];

printf("Lütfen isminizi giriniz: ");
scanf("%s", isim);

printf("Isminizin kac kez girilmesini istiyorsunuz? ");
scanf("%d", &adet);

int i;

for(i=1;i<=adet;i++){
    printf("%d-%s\n",i,isim);
}
}