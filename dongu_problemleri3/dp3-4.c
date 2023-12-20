#include<stdio.h>
//jumbled sayi kontrolü
int main(){
    
    int sayi, a, b, i=0;
    
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&sayi);

    for(;;){

        a=sayi%10;
        sayi=sayi/10;
        b=sayi%10;
 
        if(sayi==0){
            break;
        }
 
        else if(a-b==1 || a-b==-1){
            continue;
        }

        else{
            i++;
        }
        
    }

    if(i==0){
        printf("Jumbled");
    }

    else{
        printf("Jumbled degil");
    }

}