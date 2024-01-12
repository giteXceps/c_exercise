#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Girilen bir kelimeyi pointer kullanarak ters çevirip yazdırınız.
int main(){
    char kelime[50];
    printf("Lutfen bir kelime giriniz: ");
    scanf("%s",kelime); 
    
    int uzunluk;
    uzunluk= strlen(kelime);

    char *k;
    k=&kelime[0];
    
    for(int i=uzunluk;i>=0;i--){
        printf("%c",*(k+i));
    }

}