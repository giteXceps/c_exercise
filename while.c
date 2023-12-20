#include<stdio.h>

int main(){

/*
int i;
i=1;

while(i<=5){
    printf("%d-Sefa\n",i);
    i++;
}
*/

/*
int n,fact;
fact=1;

printf("Faktoriyelini almak istediginiz sayiyi giriniz: ");
scanf("%d",&n);

while(n != 0){

    printf("%d\n",n);
    fact= fact*n;
    n--;

}

printf("%d",fact);
*/

int n, hane=0,toplam=0;

printf("Sayiyi giriniz: ");
scanf("%d",&n);

do{
    toplam += n%10;
    hane++;
    n=n/10;
}

while(n>0);
printf("Rakamlar toplami: %d\nHane sayisi: %d",toplam, hane);


}



