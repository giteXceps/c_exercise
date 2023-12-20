#include <stdio.h>  

int main() {

    double maas;
    int cocuk;
    bas:
    printf("Lutfen personelin maasini giriniz: ");
    scanf("%lf",&maas);
    printf("Lutfen personelin sahip oldugu cocuk sayisini giriniz: ");
    scanf("%d",&cocuk);

    if(cocuk==0){
        printf("Personelin cocugu olmadigi icin maas zammi olmayacaktir!");
    }

    else if(maas<=0){
        printf("Personel maasi negatif olamaz!\n Degerleri tekrar giriniz.\n");
        goto bas;
    }

    else if(cocuk<0){
        printf("Cocuk sayisi negatif olamaz!\n Degerleri tekrar giriniz.\n");
        goto bas;
    }

    else if(cocuk==1){
        maas=maas+((maas/100)*5);
        printf("Personelin bir cocugu oldugu icin yuzde 5 maas zammi alacaktir;\nYeni maas: %.2lf",maas);
    }

    else if(cocuk==2){
        maas=maas+((maas/100)*10);
        printf("Personelin iki cocugu oldugu icin yuzde 10 maas zammi alacaktir;\nYeni maas: %.2lf",maas);
    }

    else{
        maas=maas+((maas/100)*15);
        printf("Personelin uc yada daha fazla cocugu oldugu icin yuzde 15 maas zammi alacaktir;\nYeni maas: %.2lf",maas);
    }
}