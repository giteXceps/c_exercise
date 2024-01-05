
#include <stdio.h>

int asalmi(int sayi){
    int i;
    for(i=2;i<sayi;i++){
        if (sayi%i==0){
            return 0;
            }
    }
    return 1;
}

int main(){
    int n;
    printf("Asal sayi kontrolu icin bir sayi giriniz: ");
    scanf("%d",&n);

    if(asalmi(n)==1){
        printf("Sayi asaldir!");
    }
    else if(asalmi(n)==0){
        printf("Sayi asal degildir!");
    }
}