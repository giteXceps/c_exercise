#include<stdio.h>

int main(){
    char cumle[1000];
    int kh=0,bh=0,rakam=0,diger=0;

    printf("Bir cumle giriniz: ");
    gets(cumle);

    for(int i=0;cumle[i]!='\0';i++){
        if(cumle[i]>='a' && cumle[i]<='z'){
            kh++;
        }
        else if(cumle[i]>='A' && cumle[i]<='Z'){
            bh++;
        }
        else if(cumle[i]>='0' && cumle[i]<='9'){
            rakam++;
        }
        else{
            diger++;
        }
    }

    printf("Kucuk harf sayisi: %d\n",kh);
    printf("Buyuk harf sayisi: %d\n",bh);
    printf("Rakam sayisi: %d\n",rakam);
    printf("Diger karakter sayisi: %d\n",diger);
}