// girilen N sayısını kenar uzunluğu alarak kare oluştur ornegin n=7

/*
*******
*******
*******
*******
*******
*******
*******
*/

#include<stdio.h>

int main() {
    
    int i, j, n;

    printf("Karenin bir kenari kac yildizdan olusmali?: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("* ");
        }
        printf("\n");
    }
    
}