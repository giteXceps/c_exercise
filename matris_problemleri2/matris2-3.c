#include<stdio.h>
#include<stdlib.h>

int main(){
    
    double matris[5][4];

    for(int i=0,j=0;i<5;i++){
        matris[i][j]=i+1;
    }

    for(int i=0;i<5;i++){
        for(int j=1;j<3;j++){
            printf("%d. Ögr icin Sirasiyla Vize ve Final Notlari: ",i+1);
            scanf("%lf",&matris[i][j]);
        }
    }

    /*
    matris[0][3]=matris[0][1]*matris[0][2]
    matris[1][3]=matris[1][1]*matris[2][2]
    matris[2][3]=matris[2][1]*matris[2][2]
    */
    for(int i=0;i<5;i++){
        matris[i][3]=matris[i][1]*matris[i][2]/2;
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            printf("%.0lf ",matris[i][j]);
        }
        printf("\n");
    }
}