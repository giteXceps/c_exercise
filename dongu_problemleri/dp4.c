#include<stdio.h>

int main(){
    int i,s;
    printf("Lutfen ilk sayiyi giriniz: ");
    scanf("%d",&i);
    printf("Lutfen ikinci sayiyi giriniz: ");
    scanf("%d",&s);
    printf("Girilen sayilar arasinda kalan tam sayilar => ");

    if(i<s){
        for(i+=1;i<s;i++){
            printf("%d ",i);
        }
    }
    else if(i>s){
        for(i-=1;i>s;i--){
            printf("%d ",i);
        }
    }
}