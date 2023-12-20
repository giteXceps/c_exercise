#include<stdio.h>

int main(){
    char c;
    printf("Bir Karakter Girin: ");
    scanf("%c", &c);  
    
    if(c>47 && c<58){
        printf("\nASCII degeri %d olan, %c karakteri bir rakamdir!",c,c);
    }
    else if(c>64 && c<91){
        printf("\nASCII degeri %d olan, %c karakteri bir buyuk harftir!",c,c);
    }
    else if(c>96 && c<123){
        printf("\nASCII degeri %d olan, %c karakteri bir kucuk harftir!",c,c);
    }
    else{
        printf("\nASCII degeri %d olan, %c karakteri bir ozel karakterdir!",c,c);
    }
    return 0;
}