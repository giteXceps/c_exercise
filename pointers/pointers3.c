#include<stdio.h>
#include<stdlib.h>
// dizi kullanmadan girilen sayiların toplamini yazdiran program
void topla(int *pArr,int n, int *result){
    *result=0;
    for(int i=0;i<n;i++){
        *result+=*(pArr+i);
    }   
}
int main(){

    int n;
    printf("Kac adet sayi toplayacaksiniz: ");
    scanf("%d",&n);

    int *pDizi=(int*)malloc(sizeof(int)*n);
    int *toplam=(int*)malloc(sizeof(int));

    if(pDizi==NULL||toplam==NULL){
        printf("Bellekte yer ayrilamadi!");
        return 0;
    }

    for(int i=0;i<n;i++){
        printf("%d. sayiyi giriniz: ",i+1);
        scanf("%d",pDizi+i);
    }

    topla(pDizi,n,toplam);
    printf("%d",*toplam);

    //bellekteki dinamik degislekenleri temizler
    free(pDizi);
    free(toplam);
}