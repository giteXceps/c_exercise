#include<stdio.h>
//fact fonksiyonu kullanarak 1 ile n arasindaki sayilarin faktoriyel degerlerini hesaplayan program yaziniz

int fact(int n){
    int fact=1;
    for (int i = 1; i <= n; i++){
        fact *=i;
    }
    return fact;
}

int main(){

    int sayi;

    printf("Sayi giriniz: ");
    scanf("%d",&sayi);
    printf("Girdiginiz sayi ile 1 arasindaki sayilarin faktoriyel degerleri: \n");
    
    for(int i=1;i<sayi;i++){
        printf("%d!=%d\t",i,fact(i));
    }

}