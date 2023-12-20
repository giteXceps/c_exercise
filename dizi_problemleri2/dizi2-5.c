#include<stdio.h>

int main(){
    char cumle[1000];

    printf("Bir cumle giriniz: ");
    gets(cumle);

    int sayac=0;

    for(int i=0;cumle[i]!='\0';i++){
        if(cumle[i]==' '){
            sayac++;
        }
    }

    printf("Cumlede ki bosluk sayisi: %d",sayac);
}