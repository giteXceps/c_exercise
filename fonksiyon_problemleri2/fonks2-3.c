#include<stdio.h>
#include<stdlib.h>
// bir karakter dizisinin eleman sayisini döndüren fonksiyon

int elemanSayisi(char arr[]){
    int i;
    for(i=0;arr[i]!='\0';i++);
    return i;
}
int main(){
    char dizi[]={105,'a','b','F'};
    int n=elemanSayisi(dizi);
    printf("%d",n);
    
}