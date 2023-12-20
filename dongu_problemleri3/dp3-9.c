#include<stdio.h>
//n tane asal sayi yazdirma
int main(){
    
    int n,i,j,temp,sayac=0;

    printf("Kaç adet asal sayi listelemek istersiniz: ");
    scanf("%d",&n);

     for(i=1;;i++){

        for(j=1;j<=i;j++){

            if(i%j==0){
                temp+=j;
            }

        }

        if(temp==i+1){

            printf("%d ",i);
            sayac++;
            
            if(sayac==n){
                break;
            }

        }
    temp=0;
    }

}