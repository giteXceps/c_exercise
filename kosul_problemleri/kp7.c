#include<stdio.h>

int main(){
    double x,y;
    double sonuc;

    printf("Sirasiyla 2 sayi giriniz: \n");
    scanf("%lf %lf",&x,&y);
    printf("Yapmak istediginiz islemi seciniz\nToplama icin 1'i\nCikarma icin 2'yi\nCarpma icin 3'u\nBolme icin 4'u\n       Tuslayiniz!\n");

    int islem;
    scanf("%d",&islem);

    switch(islem){

        case 1:
        sonuc=x+y;
        printf("%.2lf+%.2lf=%.0lf",x,y,sonuc);
        break;

        case 2:
        sonuc=x-y;
        printf("%.2lf-%.2lf=%.0lf",x,y,sonuc);
        break;

        case 3:
        sonuc=x*y;
        printf("%.2lf*%.2lf=%.2lf",x,y,sonuc);
        break;

        case 4:
        if(y==0){
            printf("%.2lf/%.2lf=Tanimsiz",x,y);
        }
        else{
        sonuc=x/y;
        printf("%.2lf/%.2lf=%.2lf",x,y,sonuc);
        }
        break;
    }
    
}