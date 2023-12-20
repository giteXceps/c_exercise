#include<stdio.h>

int main() {

    int i,j,k=1,n;

    printf("Sayi giriniz: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        for(j=0;j<i;j++){
            printf("%d ",k);
            if(k==1)
            k=0;
            else if(k==0)
            k=1;
        }
        printf("\n");
    }
}