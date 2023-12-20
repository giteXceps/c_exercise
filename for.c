#include<stdio.h>

int main(){
/* 
//for ve for içinde for

    int i;
    int j;

    for(i=0;i<10;i++){
        
        for(j=0;j<5;j++){
            printf("i: %d, j: %d\n",i,j);
        }

    }
*/

/*
//fibonacci dizisi

int ilksayi=1;
int ikincisayi=1;
int i;

printf("%d\n%d\n",ilksayi,ikincisayi);

for(i=0;i<12;i++){

    int temp=ikincisayi;
    ikincisayi+=ilksayi;
    ilksayi=temp;

    printf("%d\n",ikincisayi);
}
*/


//break

int toplam=0;
int i,sayi;

for (i=0; ;i++){

    printf("Bir sayi giriniz(Girilen sayilarin toplamini bulmak için 0'i tuslayiniz): ");
    scanf("%d",&sayi);

    if(sayi==0){
        break;
    }

    toplam+=sayi;
}
printf("Girilen sayilarin toplami= %d",toplam);

}
