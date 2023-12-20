#include<stdio.h>
//Girilen N değerine göre 1-N arasındaki tüm Mükemmel sayıları yazdırınız.
int main(){
    int i,j,n,toplam=0;

    printf("Sayi giriniz: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){

        for(j=1;j<i;j++){
            if(i%j==0){
                toplam+=j;
            } 
        }

    if(toplam==i){
            printf("%d ",i);
        }
    toplam=0;
    }
}