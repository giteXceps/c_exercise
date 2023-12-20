#include<stdio.h>

int main(){
    
    int sayi,temp=0,i;

    printf("Asal sayi kontrolu yapmak istediginiz sayiyi giriniz: ");
    scanf("%d",&sayi);

    for(i=1;i<=sayi;i++){
        if (sayi % i == 0){
            temp+=i;
        }
    }
    
    if(temp==1+sayi){
        printf("\n%d sayisi asaldir.",sayi);
        }

    else{
        printf("\n%d sayisi asal degildir.",sayi);
    }
}
