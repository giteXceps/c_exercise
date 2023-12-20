#include<stdio.h>

int main(){

    char kelime[50],ters[50];

    printf("Kelime giriniz: ");
    gets(kelime);

    int n=0;

    for(int i=0;kelime[i]!='\0';i++){
        n++;
    }

    int i=0;
    int nkayit=n;

    for(n=n-1;n>=0;n--){
        ters[i]=kelime[n];
        i++;
    }

    int sayac=0;
    
    for(int i=0;i<nkayit;i++){

        if(kelime[i]==ters[i]){
        sayac++;
        }

        if(kelime[i]=='\0'){
            break;
        }

    }

    if(sayac==nkayit){
        printf("Palindrom!");
    }

    else{
        printf("Palidrom Degil!");
    }
}