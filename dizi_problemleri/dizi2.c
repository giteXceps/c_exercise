#include<stdio.h>

int main(){

    int cift[50];
    int i,j;
    int index=0;

    for(i=0;i<=100;i+=2){
        cift[index]=i;
        index++;
    }

    for(j=0;j<=50;j++){
        printf("%d ",cift[j]);
    }
}