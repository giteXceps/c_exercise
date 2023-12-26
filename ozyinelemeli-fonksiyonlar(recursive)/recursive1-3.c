#include<stdio.h>
#include<stdlib.h>
// kelime yazdiran recursive function

void kelimeYazdir(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        printf("Kelimenin %d. karakteri: '%c' \n",i+1, arr[i]);
    }
}

int main(){
    char kelime[999];
    printf("Kelime giriniz; ");
    gets(kelime);

    kelimeYazdir(kelime);
}