#include<stdio.h>

int main(){

    double a,b,c;

    printf("Sirasiyla 3 uzunluk giriniz:\n");
    scanf("%lf%lf%lf",&a,&b,&c);


    if((a*a)+(b*b)==(c*c)){
        printf("Bu uzunluklar ile ucgen cizilebilir!");
    }
    else if((a*a)+(c*c)==(b*b)){
        printf("Bu uzunluklar ile ucgen cizilebilir!");
    }
    else if((b*b)+(c*c)==(a*a)){
        printf("Bu uzunluklar ile ucgen cizilebilir!");
    }
    else{
        printf("Bu uzunluklar ile ucgen cizilemez!");
    }

}