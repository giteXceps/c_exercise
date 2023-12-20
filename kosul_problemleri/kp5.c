#include<stdio.h>

int main(){

    int vize,final;

    printf("Vize Notunuzu Giriniz: ");
    scanf("%d",&vize);

    printf("Final Notunuzu Giriniz: ");
    scanf("%d",&final);

    double not=(vize*0.4)+(final*0.6);

    if(not>=55){
        printf("Notunuz: %.2lf \n   Basarili!",not);
    }
    else{
        printf("Notunuz: %.2lf \n  Basarisiz!", not);
    }
}