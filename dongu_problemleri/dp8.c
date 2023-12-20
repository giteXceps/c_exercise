#include<stdio.h>

int main(){
    double x,y;
    double sonuc;
    int islem;

    for(;;){
        forbas:
        printf("\nYapmak istediginiz islemi seciniz\nToplama icin 1'i\nCikarma icin 2'yi\nCarpma icin 3'u\nBolme icin 4'u\nCikis icin 0'i\n       Tuslayiniz!\n");
        scanf("%d",&islem);

        if(islem==0){
            printf("Cikis yapiliyor...");
            return 0;
        }
        else if(islem<0 || islem>4){
            printf("HATA: Hatali islem secimi!\n");
            goto forbas;
        }
        
        printf("Sirasiyla 2 sayi giriniz: \n");
        scanf("%lf %lf",&x,&y);

        switch(islem){
            
        case 1:
            sonuc=x+y;
            printf("%.0lf+%.0lf=%.0lf\n",x,y,sonuc);
            break;

        case 2:
            sonuc=x-y;
            printf("%.0lf-%.0lf=%.0lf\n",x,y,sonuc);
            break;  

        case 3:
            sonuc=x*y;
            printf("%.0lf*%.0lf=%.0lf\n",x,y,sonuc);
            break;

        case 4:
            if(y==0){
                    printf("%.0lf/%.0lf=Tanimsiz\n",x,y);
                }
            else{
                    sonuc=x/y;
                    printf("%.0lf/%.0lf=%.2lf\n",x,y,sonuc);
                }
            break;
        }
    }
}
