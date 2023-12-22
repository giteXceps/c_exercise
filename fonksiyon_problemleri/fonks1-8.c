#include<stdio.h>
//bir tam sayinin kac basamakli oldugunu donduren fonksiyon

int basamakSay(int n){
    int count=0; //basamak sayisi
    while (n!=0) {
        n/=10;
        count++;
        }
    
    return count;
}

int main(){
    
    int sayi;
    
    printf("Sayi giriniz: ");
    scanf("%d",&sayi);
    printf("Sayiniz %d basamaklidir.",basamakSay(sayi));

}