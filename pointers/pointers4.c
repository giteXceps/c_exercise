#include<stdio.h>
#include <stdlib.h>
//Girilen sayının faktöriyelini bulan fonksiyon yazınız. Fonksiyonda return kullanılmayacak ve faktöriyel sonucu main de yazdırılacaktır.
void fact (int n,int *res){
    if(n==0){
        *res=1;
    }
    else if(n==1){
        *res=1;
    }
    else{
        for(int i=2;i<=n;i++){
            (*res)*=i;
        }
    }
}
int main(){
    int n;
    int *sonuc;

    printf("Hangi sayinin faktoriyel degerini hesaplamak istiyorsun?: ");
    scanf("%d", &n);

    sonuc=(int*)malloc(sizeof(int)*n);
    if (sonuc == NULL) {
        printf("Memory could not be allocated!\n");
        exit(1);
        }

    *sonuc=1;
    fact(n,sonuc);
    printf("%d",*sonuc);
}    