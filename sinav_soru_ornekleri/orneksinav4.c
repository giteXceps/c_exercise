#include<stdio.h>
//Asagida yazilmis olan kodun ciktisini yaziniz.

int main(){
    char A[]="ab1234";
    char B[]="1234ab";
    char C[6];

    for(int i=0;i<6;i++){
        if(A[i]>'0'&&A[i]<'9'){
            C[i]=A[i];
        }
        else{
            C[i]=B[i];
        }
    }

    for(int i=0;i<6;i++){
        printf("%c",C[i]);
    }
}

// Cevap=121234