#include<stdio.h>

int main (){

    int a,b,c;

    printf("Sirasiyla 3 tane sayi giriniz:");
    scanf("%d %d %d",&a,&b,&c);

    if(a<=b && a<=c){
        printf("Girdiginiz sayilarin en kucugu: %d",a);
    }

    else if(b<=a && b<=c){
        printf("Girdiginiz sayilarin en kucugu: %d",b);
    }

    else{
        printf("Girdiginiz sayilarin en kucugu: %d",c);
    }

}