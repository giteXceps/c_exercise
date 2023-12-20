#include<stdio.h>

int main(){

    int sayi;

    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);


    if((sayi%6)==0){
        printf("%d sayisi 6'nin katidir.",sayi);
    }
    else{
        printf("%d sayisi 6'nin kati degildir.",sayi);
    }
}