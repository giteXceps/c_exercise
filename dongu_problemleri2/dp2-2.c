#include<stdio.h>
#include<math.h>

int main(){
    
    int a,b;
    char giris[16];

    for(;;){

        printf("A sayisini giriniz(Cikmak icin q tuslayiniz):\n");
        scanf("%s",giris);

        if(giris[0]=='q' || giris[0]=='Q')
        {
            printf("Cikis yapildi!\n");
            break;
        }

        if(sscanf(giris, "%d", &a))
        {
        printf("B sayisini giriniz:\n");
        scanf("%d",&b);
        int sonuc=pow(a,b);
        printf("%d^%d=%d\n",a,b,sonuc);
        }

    }
}