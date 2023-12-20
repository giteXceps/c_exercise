#include<stdio.h>
//1den n sayisina kadar olan sayilarin hepsinin faktoriyeli
int main(){
        
    int sayi, fact, i, j;
    fact=1;

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    for(i=1;i<=sayi;i++,fact=1){

        printf("%d!=",i);

        for(j=1;j<=i;j++){
            fact = fact * j;
        }
        
        printf("%d ",fact);
        
    }
}