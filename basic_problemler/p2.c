#include <stdio.h>

int main () {

    int x,y,toplam,carpim;  

    printf("Lütfen ilk sayýnýzý giriniz:"); 
    scanf("%d", &x);

	printf("Lütfen ikinci sayýnýzý giriniz:"); 
    scanf("%d", &y);

	toplam=x+y;	
	carpim=x*y;

	printf("Verdiðiniz sayýlarýn toplamý %d'dir.\n", toplam);
	printf("Verdiðiniz sayýlarýn çarpýmý %d'dir.\n", carpim);

    return 0;
}
