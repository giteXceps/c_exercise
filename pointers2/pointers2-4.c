#include<stdio.h>
#include<stdlib.h>
//Girilen bir kelimedeki sesli ve sessiz harf sayılarını pointer kullanarak bulunuz.

int main() {
    printf("Kelime giriniz: \n");
    char kelime[100];
    gets(kelime);

    char *p=kelime;
    int count_sesli=0; // Sesli harf sayacı
    int count_sessiz=0; // Sessiz harf sayacı

    while (*p!='\0'){

        switch (*p){
            case 'a': 
            case 'e': 
            case 'i': 
            case 'ı':
            case 'u': 
            case 'ü': 
            case 'o': 
            case 'ö':
            case 'A': 
            case 'E': 
            case 'I': 
            case 'İ':
            case 'U': 
            case 'Ü': 
            case 'O': 
            case 'Ö':
                count_sesli++;
                break;

            default:
                if (('a'<=*p && *p<='z') || ('A' <= *p && *p <= 'Z') || (*p == 'ç' || *p == 'Ç' || *p == 'ş' || *p == 'Ş' || *p == 'ğ' || *p == 'Ğ')){
                    count_sessiz++;
                }
        }
        p++;
    }

    printf("%d Sesli\n%d Sessiz\nHarf vardir\n", count_sesli, count_sessiz);

    return 0;
}