#include<stdio.h>

int main(){

    int a,b;

    printf("Ilk sayiyi giriniz:");
    scanf("%d",&a);

    printf("Ilk sayiyi giriniz:");
    scanf("%d",&b);

    printf("Girdiginiz sayilar sirasiyla; A=%d,B=%d\n",a,b);

    int temp;

    temp=a;
    a=b;
    b=temp;

    printf("Sayilarinizin tersi; A=%d,B=%d\n",a,b);

}