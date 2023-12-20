#include<stdio.h>
//x y x+y x+y+y x+x+y+y+y
//0 1 1 2 3 5 8 13
int main(){

    int ilk, iki, temp, i, n;
    ilk=0;
    iki=1;

    bas:
    printf("Fibonacci dizisinin kac terimini hesaplamak istersiniz?:\n");
    scanf("%d",&n);

    if(n<=0){
        printf("0 veya daha kucuk deger girilemez!\n");
        goto bas;
    }

    else if(n==1){
        printf("%d\n",ilk);
    }

    else if(n==2){
        printf("%d %d",ilk,iki);
    }

    else{

        printf("%d ", ilk);
        printf("%d ", iki);

        for(i=1;i<n;i++){
            
            temp=iki;
            iki=iki+ilk;
            ilk=temp;
            printf("%d ",iki);

            }
        }

    }
    
    
