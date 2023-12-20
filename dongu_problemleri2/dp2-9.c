#include<stdio.h>

int main(){
    
    int pozitif=0, negatif=0, notr=0, n, i, sayi;

    printf("Kac adet sayi gireceksiniz?: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        
        printf("Sayi giriniz: ");
        scanf("%d",&sayi);

        if(sayi==0)
            notr++;
        else if(sayi<0)
            negatif++;
        else if(sayi>0)
            pozitif++;

    }

    printf("Pozitif sayi sayisi: %d\n",pozitif);
    printf("Notr sayi sayisi: %d\n",notr);
    printf("Negatif sayi sayisi: %d\n",negatif);
}