#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
        //A[x][y] için;
        //x satır sayisi (i)
        //y sütun sayisi (j)

    int A[2][3]= {{1,2,3},{4,5,6}};
    
    int i,j;

    for(i=0;i<2;i++){               //satir
        for(j=0;j<3;j++){           //sütun
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}

// srand(time(NULL))
// int sayi=rand()%100;