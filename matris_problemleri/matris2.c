#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int sayac=0;
    srand(time(NULL));

    int m[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            m[i][j]=rand()%101;
            if(m[i][j]>50){
                sayac++;
            }
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    printf("\nYukarida rastgele olusturulan 3x3 matriste %d adet sayi 50'den buyuktur.",sayac);
}