#include<stdio.h>
#include<stdlib.h>
//Pointer kullanarak A-Z arası harfleri belleğe yerleştirip ekrana yazdırınız.
int main(){
    char *p;
    p=(char*)malloc(26*sizeof(char)); //A-Z iç
    for(int i=0;i<27;i++){
        *(p+i)=(65+i);
    }
    printf("Yerlestirilen karakterler:\n");
    for(int j=0;j<26;j++){
        printf("%c\t",*(p+j));
        if((j+1)%5==0){
            printf("\n");
            }
            }

}