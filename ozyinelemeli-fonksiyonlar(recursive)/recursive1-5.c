#include<stdio.h>
#include<stdlib.h>
// fibonocci dizisinin n elemanını bulan recursive function
//1,1,2,3,5,8,13,21

int fib(int n){
    if (n==1)  return  1;
    else if (n==2) return  1;
    else return fib(n-1)+fib(n-2);
}

int main(){
    int sayi;
    printf("Fibonacci dizisinin kacinci elemanini istiyorsunuz?\n");
    scanf("%d",&sayi);
    printf("Fibonocci dizisinin %d. elemani: %d\n",sayi,fib(sayi));
}