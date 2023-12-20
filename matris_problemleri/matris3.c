#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(NULL));

    int min,max,m[4][4],i,j;
    double toplam=0;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            m[i][j]=rand()%101;
            toplam+=m[i][j];
            if(m[i][j]<10){
                printf("%d  ",m[i][j]);
            }
            else{
                printf("%d ",m[i][j]);
            }
        }
        printf("\n");
    }

    min=m[0][0];
    max=m[0][0];

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
        if(min>m[i][j]){
            min=m[i][j];
        }
        if(max<m[i][j]){
            max=m[i][j];
        }
        }
    }

    printf("Yukarida rastgele 4x4 matriste;\n");
    printf("Tum elemanlarin ortalamasi: %.2lf\n",toplam/16);
    printf("En buyuk eleman: %d\n",max);
    printf("En kucuk eleman: %d\n",min);
}