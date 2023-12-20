#include<stdio.h>
//1den n'e kadar olan sayi
int main(){
    
    int i,j,n,kalan=0;
    
    printf("Sayi giriniz: ");
    scanf("%d",&n);

    printf("Girdiginiz sayidan kucuk yada esit olan tum asal sayilarin listesi:\n");

    for(i=1;i<=n;i++){

        for(j=1;j<=i;j++){

            if(i%j==0){
                kalan+=j;
            }

        }
            
        if(kalan==i+1){
            printf("%d ",i);
        }

    kalan=0;

    }


}