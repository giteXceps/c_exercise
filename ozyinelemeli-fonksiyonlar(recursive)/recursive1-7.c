#include<stdio.h>
#include<stdlib.h>
//iki sayinin ebobunu bulan recursive function

int ebob(int num1, int num2) {
    // Eğer num2, num1'in bir katı ise eBOB num2 olur
    if (num1 % num2 == 0) {
        return num2;
    }
    // Aksi takdirde, eBOB'u num1 ve num2'nin bölümünden buluruz
    else {
        return ebob(num2, num1 % num2);
    }
}

int main() {
    int a, b;

    printf("Sirasiyla iki sayi giriniz: \n");
    scanf("%d %d", &a, &b);

    int sonuc = ebob(a, b);

    printf("Ebob: %d\n", sonuc);
}
