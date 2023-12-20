#include<stdio.h>

int main(){
    int i,toplam;
    i=0;
    toplam=0;

    while(i<=10){
        toplam+=i;
        i++;
    }
    
    printf("%d",toplam);
}