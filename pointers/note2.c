#include<stdio.h>
#include<stdlib.h>

int main(){

    int a=5;
    int *p=&a;
    
    printf("a degiskeninin adres degeri: %p \n",p);

    printf("P'nin adresindeki deger: %d\n",*p);
    *p=3;
    printf("P'nin adresindeki deger: %d\n",*p);
    printf("a: %d",a);
}