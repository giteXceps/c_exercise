#include<stdio.h>

int main(){

    int i,n,kalan;
    printf("Basamak degerlerini yazdirmak istediginiz sayiyi girin: ");
    scanf("%d",&n);

    for(i=1;n!=0;){
        kalan=n%10;
        printf("%d'ler basamagi: ",i);
        printf("%d\n",kalan);
        n=n/10;
        i=i*10;
    }
}