#include<stdio.h>
#include<stdlib.h>

int main(){

    int *p=(int*)malloc(sizeof(int)*5);

    if(p==NULL){
        printf("Bellek Dolu!");
        return 0;
    }

    *p=2;
    printf("p adersi: %p\n",p);
    printf("p degeri: %d\n",*p);

    printf("bir sayi giriniz: ");
    scanf("%d",p);
    printf("Girilen sayi: %d",*p);


}