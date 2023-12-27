#include<stdio.h>
//girilen sayiya kadar olan tek sayilarin karesini alıp ekrana yazdiran c programini yaziniz:

int main(){
    int n, i;

    printf("Sayi giriniz: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        if(i%2==1){
            printf("%d ",i*i);
        }
    }
}