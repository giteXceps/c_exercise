#include<stdio.h>
//ikilik to onluk
int main(){
    int ikilik, onluk, temp, basamak;

    printf("\nIkilik tabandaki sayiyi giriniz: ");
    scanf("%d", &ikilik);

    onluk=0;
    basamak=1;

    for(;ikilik!=0;){

        temp=ikilik%10;
        onluk+=temp*basamak;
        ikilik/=10;
        basamak*=2;

    }
    
    printf("\nIkilik tabanda girdiginiz sayinin onluk tabanda karsiligi %d'dir",onluk);
}