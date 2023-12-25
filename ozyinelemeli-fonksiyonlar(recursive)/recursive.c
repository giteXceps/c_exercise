#include<stdio.h>
#include<stdlib.h>
/* 1'den 5'e kadar olan sayilarin yazdirilmasi
void sayiYaz(int a){
    if (a==0){
        return;
    }
    printf("%d ",a);
    sayiYaz(a-1);
}

int main(){
    sayiYaz(5);
}
*/

/* 1'den 5'e kadar olan sayilarin toplamini yazdirmak
int sum(int n){
    if(n==0){
        return 0;
    }
    else{
        return n+sum(n-1);
    } 
}

int main(){
    int sonuc=sum(5);
    printf("%d ",sonuc);
}
*/

int fact(int n){
    if(n<=1){
        return 1;
    }
    return n*fact(n-1);
}

int main(){
    int sayi=10;
    printf("%d!=%d\n",sayi,fact(sayi));
}