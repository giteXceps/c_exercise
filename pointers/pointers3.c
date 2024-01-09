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
    
    //bellekte dinamik degisken ataması
    int *pDizi=(int*)malloc(sizeof(int)*n);
    int *toplam=(int*)malloc(sizeof(int));

    //dinamik degisken atamasinda sorun olusursa hata verecek
    if(pDizi==NULL||toplam==NULL){
        printf("Bellekte yer ayrilamadi!");
        return 0;
    }

    for(int i=0;i<n;i++){//döngü baslangici
        printf("%d. sayiyi giriniz: ",i+1);
        scanf("%d",pDizi+i);//bellekte ayrilan yerlere sirasiyla girilen sayilari yerleştirir
    }

    topla(pDizi,n,toplam);
    printf("Girdiginiz sayilarin toplami: %d",*toplam);

    //bellekteki dinamik degislekenleri temizler
    free(pDizi);
    free(toplam);
}