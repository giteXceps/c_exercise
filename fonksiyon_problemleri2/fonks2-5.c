#include<stdio.h>
#include<stdlib.h>
// bir dizideki sayiyi konumu ile birlikte döndüren fonksiyon

int diziAra(int arr[], int n){
    for(int i=0;arr[i]!='\0';i++){
        if (arr[i]==n){
        printf("%d elamani, dizinin %d. elemanidir",n,i+1); //bulduğunuz elemanın konumun
        return 0;
        }
    }
    printf("Eleman bulunamadi.\n");
    return 0;
}

int main(){
    int dizi[] = {5, 8, 3, 7, 2};
    int sayi;

    printf("Lutfen aradiginiz sayiyi girin: ");
    scanf("%d",&sayi);

    diziAra(dizi, sayi);

}