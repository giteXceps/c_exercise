#include<stdio.h>

int main(){
    double boy,kilo,vki;

    printf("Boyunuzu girin(m): ");
    scanf("%lf",&boy);
    printf("Kilonuzu girin(kg): ");
    scanf("%lf",&kilo);

    vki=kilo/(boy*boy);
    printf("Vucut kitle indeksiniz: %lf" ,vki);

    if (vki<18.5){
        printf("VKI degeriniz normalin altinda yani zayifsiniz.");
    }

    else if(vki<25){
        printf("VKI degeriniz normal.");
    }
    
    else if(vki<30){
        printf("VKI degeriniz normalin biraz üzerinde hafif kilolusunuz.");
    }

    else if(vki<35){
        printf("VKI degeriniz normalin üzerinde fazla kilolusunuz.");
    }

    else {
        printf("VKI çok yüksek obezsiniz.");
    }
    
}