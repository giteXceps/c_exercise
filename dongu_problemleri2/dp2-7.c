#include<stdio.h>

int main(){

    int fakt=1, i, ikayit;
    
    printf("Faktoriyelini hesaplamak istediginiz sayiyi giriniz: ");
    scanf("%d", &i);
    ikayit=i;

    for(;i>0;i--){
        fakt=fakt*i;
    }

    printf("%d!=%d", ikayit,fakt);
}