#include<stdio.h>

int main(){

    int n;
    printf("Fibonocci dizisinin kaç terimini yazdirmak istersiniz?: ");
    scanf("%d",&n);
    
    int fib[n],i;
    fib[0]=0;
    fib[1]=1;

    for(i=2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }

    for(i=0;i<n;i++){
        printf("%d ",fib[i]);
    }
}