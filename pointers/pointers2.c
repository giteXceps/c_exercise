#include<stdio.h>
//Girilen A ve B sayılarını yer değiştiren fonksiyonu yazınız.(Sayı alma ve sonuçları yazdırma işlemleri main’de yapılacaktır.)

void degistir(int *p,int *q){
    int temp=*p;
    *p=*q;
    *q=temp;
}
int main(){
    int a,b;
    printf("Lutfen ilk sayiyi giriniz:");
    scanf("%d",&a);
    printf("Lutfen ikinci sayiyi giriniz:");
    scanf("%d",&b);

    printf("A=%d, B=%d\n",a,b);
    degistir(&a,&b);
    printf("Degisimden sonra:\n");
    printf("A=%d, B=%d",a,b);
}