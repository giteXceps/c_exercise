#include<stdio.h>
//pronic sayi kontrolü
int main(){

    int sayi,i;

    printf("Sayi giriniz: ");
    scanf("%d",&sayi);

    for(i=1;i<sayi;i++){

        if(sayi==i*(i+1)){
            printf("Sayi pronic sayidir");
            return 0;
        }
        
    }
    printf("Sayi pronic sayi degildir");
}