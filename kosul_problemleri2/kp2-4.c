#include<stdio.h>

int main(){
    int sayi;

    printf("Lutfen bir sayi giriniz");
    scanf("%d",&sayi);

    if(sayi%2==0){
        printf("Girilen sayi bir cift sayidir");
        if(sayi%6==0){
            printf(" ve 6 ile tam bolunur");
        }
        else{
            printf(" ve 6 ile tam bolunemez");
        }
    }

    else{
        printf("Girilen sayi bir tek sayidir");
        if(sayi%3==0){
            printf(" ve 3 ile tam bolunur");
        }
        else{
            printf(" ve 3 ile tam bolunemez");
        }
    }
}