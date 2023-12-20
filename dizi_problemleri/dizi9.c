#include<stdio.h>

int main(){
    
    int n;

    printf("Sinif mevcudu kac?: ");
    scanf("%d",&n);

    int ogr[n],i;

    for(i=0;i<n;i++){
        printf("%d. Ogrencinin notunu giriniz: ",i+1);
        scanf("%d",&ogr[i]);
    }

    int min=ogr[0];
    int max=ogr[0];
    int j,k,jkayit,kkayit;

    for(j=0;j<n;j++){
        if (min>=ogr[j]){
            min=ogr[j];
            jkayit=j+1;
        }
    }

    for(k=0;k<n;k++){
        if(max<=ogr[k]){
            max=ogr[k];
            kkayit=k+1;
        }
    }
    printf("En yuksek puanli ogrenci %d. ogrencidir puani %d'dir\n",kkayit,max);
    printf("En dusuk puanli ogrenci %d. ogrencidir puani %d'dir\n",jkayit,min);

    int toplam=0,l;

    for(l=0;l<n;l++){
        toplam+=ogr[l];
    }
    double ort=toplam/n;
    printf("Ogrencilerin not ortalamasi %.2lf'dir",ort);
}
