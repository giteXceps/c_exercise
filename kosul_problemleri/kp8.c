#include<stdio.h>

int main(){
    int gun;
    printf("Kacinci gunu yazdirmak istiyorsunuz?(1-7)\n");
    
    bas:
    scanf("%d",&gun);
    if(gun<=7 && gun>0){

        switch(gun){
          
            case 1:
            printf("Pazartesi");
            break;
            case 2:
            printf("Sali");
            break;
            case 3:
            printf("Carsamba");
            break;
            case 4:
            printf("Persembe");
            break;
            case 5:
            printf("Cuma");
            break;
            case 6:
            printf("Cumartesi");
            break;
            case 7:
            printf("Pazar");
            break;
    }

    }

    else{
        printf("Girdiginiz deger 1 ile 7 kapali araliginda olmalidir!\nTekrar bir deger giriniz:\n");
        goto bas;
        
    }

    return 0;
}