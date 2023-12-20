#include <stdio.h>

int main(){
      

        int gun;
        int guntemp;

        programbasi:
        
        printf("Gun sayisini giriniz:");
        scanf("%d",&gun);

        guntemp=gun;
        
        int yil=guntemp/365;
        guntemp=guntemp%365;
        int ay=guntemp/30;
        guntemp=guntemp%30;
        int hafta=guntemp/7;
        guntemp=guntemp%7;

        if (gun<0) {
            printf("Gun sayisi negatif olamaz!\n");
            goto programbasi;
        } 

        else{
            printf("%d Gun; %d Yil, %d Ay, %d Hafta ve %d Gun eder.\n",gun,yil,ay,hafta,guntemp);
            printf("NOT: Yillar 365 gun, aylar ise 30 gun olarak hesaplanir!");
        }

    return 0;
}