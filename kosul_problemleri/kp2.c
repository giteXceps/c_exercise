#include<stdio.h>

int main(){
    
    int sayi;
    printf("Mutlak degerini almak istediginiz sayiyi giriniz:");
    scanf("%d",&sayi);

    if(sayi<0){
        sayi=sayi*(-1);
        printf("Girdiginiz sayinin mutlak degeri %d'dir",sayi);
    }

    else {
        printf("Girdiginiz sayinin mutlak degeri %d'dir",sayi);
    }

}