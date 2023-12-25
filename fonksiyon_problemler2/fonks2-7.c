#include<stdio.h>
#include<stdlib.h>
// girilen bir tam sayi dizisindeki en buyuk sayiyi donduren fonksiyon

int enBuyuk(int arr[],int n){
    int max = arr[0]; // ilk elemanın degerini max değişkenine atama
    for (int i = 1 ; i<n ; i++){
        if(arr[i] > max){
            max = arr[i]; // eger girilen sayi max den buyukse onu yeni maxa atama
        }
    }
    return max; // max degerini doner
}

void diziAl(int dizi[], int n){

    for(int i=0;i<n;i++){
        printf("%d. elemani giriniz: ",i+1);
        scanf("%d",&dizi[i]);
    }
}


int main(){
    int n;
    printf("Dizi kac elemanli olacak?: ") ;
    scanf("%d",&n);

    int dizi[n];
    
    diziAl(dizi,n);
    int sonuc=enBuyuk(dizi,n);
    printf("%d ",sonuc);
    
}