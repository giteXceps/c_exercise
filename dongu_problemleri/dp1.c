#include<stdio.h>

int main(){

    char isim[16];
    
    printf("Isminiz nedir? ");
    scanf("%s",isim);
    
    int i;

    for(i=1;i<6;i++){
        printf("%d-%s\n",i,isim);
    }

}