#include<stdio.h>
#include<stdlib.h>
//girilen iki kelimeninin uzunluklarınının eşitliğini döndüren 

int elemanSayisi(char arr[]){
    int i;
    for(i=0;arr[i]!='\0';i++);
    return i;
}
int main(){
    char kelime1[100],kelime2[100];

    printf("ilk kelimeyi giriniz:");
    gets(kelime1);
    printf("Ikincisini giriniz:");
    gets(kelime2);

    if(elemanSayisi(kelime1)!=elemanSayisi(kelime2)){
        printf("Girmis oldugunuz iki kelimede ki karakter sayilari farklidir");
    }
    else {
        printf("Girmis oldugunuz iki kelimenin karakter sayisi aynidir.");
        }
}