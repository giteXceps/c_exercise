#include<stdio.h>

int main(){
    
    int n,i;

    printf("Lütfen bolenlerini ogrenmek istediginiz sayiyi giriniz: ");
    scanf("%d",&n);

    printf("%d sayisinin bölenleri sirasiyla:\n",n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }
    
}