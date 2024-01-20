/*
    // & degiskenin adres bilgisini verir 
    // * adresteki degeri verir

    int dizi[4]={1,2,23,2};
    int *ptr=dizi;
    dizinin adresini kullanmadık çünkü dizinin ilk elemanı zaten adres tutar.

    


*/


#include<stdio.h>
void degerdegistir(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;

}
int main(){
/*
    int i=5;
    
    int *p = &i;
    printf("%u\n",p);
    printf("%d",*p);
*/


int a=5, *ap;
float b=3.2, *bp;
double c=3.412, *cp;
char d='a', *dp;

int sayilar[5]={1,2,3,4,5};
int *arrayp;

ap=&a;
bp=&b;
cp=&c;
dp=&d;

arrayp=&sayilar[1];

printf("%u adresindeki intin degeri %d\n",ap,*ap);
printf("%u adresindeki floatin degeri %f\n",bp,*bp);
printf("%u adresindeki doublenin degeri %lf\n",cp,*cp);
printf("%u adresindeki charin degeri %c\n",dp,*dp);
printf("%u adresindeki sayilarin degeri %d\n",arrayp,*arrayp);


/*
int i,j=1;
int *jp1,*jp2=&j;

jp1=jp2;

i=++(*jp2);

*jp2=*jp1+i;
printf("i=%d, j=%d, *jp1=%d, jp2=%d\n",i,j,*jp1,*jp2);
*/

int x=5,y=10;
degerdegistir(&x,&y);
printf("\nx= %d, y=%d",x,y);

}