#include<stdio.h>
#include <stdlib.h>
//Girilen bir kelimenin uzunluğunu pointer kullanarak bulunuz.

int main(){
    char kelime; //pointer ile karakter dizisi tanımladı
    int uzunluk=0;  //uzunluk değişken
    char *p = &kelime;

    printf("Lütfen bir kelime giriniz: ");
    scanf("%c",&kelime);

    while(*p!='\0'){ //döngüye giris
        uzunluk++;     //her defada birer arttır
        p++;      //sonraki elemana geç
    }
    printf("\nKelimenin uzunlugu %d karakterdir.",uzunluk);
    
}