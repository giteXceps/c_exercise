#include<stdio.h>
//girilen sayinin mutlak degerini donduren fonksiyon

int mutlakbul(int n){
    if(n>0){
        return n;
    }
    else{
        return -n;
    }
}

int main(){
    int sayi;
    printf("Sayi giriniz: ");
    scanf("%d",&sayi);
    printf("\nGirilen sayinin mutlak degeri: %d\n",mutlakbul(sayi));
}