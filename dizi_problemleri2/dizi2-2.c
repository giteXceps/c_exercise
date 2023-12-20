#include<stdio.h>

int main(){
    int dizi[5]={1,2,3,4,5};
    int x,y;

    for(int i=0;i<5;i++){
        printf("%d ",dizi[i]);
    }
    printf("\nYukarida ki dizinin kacinci elemanini degistirmek istersiniz?: ");
    scanf("%d",&x);
    printf("\nYerine ne yazmak istersiniz?: ");
    scanf("%d",&y);

    dizi[x-1]=y;
    printf("Yeni diziniz:\n");
    for(int i=0;i<5;i++){
        printf("%d ",dizi[i]);
    }
}