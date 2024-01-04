#include<stdio.h>
#include<stdlib.h>
// bir metinde istenen harften kaç tane olduğunu döndüren fonksiyon

int harfAra(char arr[], char n[]){
    int i, count=0; // sayacımızın başlangıcı 0 
    for (i=0 ; arr[i]!='\0' ;i++){
        if (arr[i]==n[0]){ // n karakteri ile dizideki harf eşleşirse sayac artar
            count++;
        }
    }
    return count;
}
int main(){

    char metin[999];
    char n[1];

    printf("Maksimum 999 karakter olacak şekilde metin giriniz: ");
    gets( metin );

    printf("Metinde kac adet oldugunu hesaplamak istediginiz harf nedir?: ");
    scanf(" %c", n);
    
    int sonuc=harfAra( metin , n);
    printf("%c karakteri %d adet bulundu.\n" , n[0] , sonuc);


}
