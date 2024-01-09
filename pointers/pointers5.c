#include<stdlib.h>
#include<stdio.h>
//Girilen bir kelimenin uzunluğunu pointer kullanarak bulunuz.

int main(){
    char kelime[50];
    printf("Lutfen bir kelime giriniz: ");
    gets(kelime);
    
    char *p;
    p=&kelime[0];

    int i;
    for(i=0;*(p+i)!='\0';i++){
        i++;
    }

    printf("Girdiginiz kelime %d tane karakterden olusmaktadir.",i);
}