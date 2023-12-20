#include<stdio.h>

int main() {

    int sayilar[14]= {20,60,45,42,23,24,26,125,66,55,145,50,30,40};

    for(int i=0;i<14;i++){

        if(i+1==14){
            break;
        }

        else if(sayilar[i]%2==0 && sayilar[i+1]%2==0){
            printf("%d-%d sirali iki cift sayidir.\n",sayilar[i],sayilar[i+1]);
        }
    }
    
}