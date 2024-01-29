#include<stdio.h>
#include<stdlib.h>

//Kullanıcıdan N adet sayı aldıktan sonra bu sayıları toplam fonksiyonuna göndererek toplamlarını bulunuz ve sonucu main’de yazdırınız.(Dizi kullanılmayacaktır)
void toplam(int n, int *arr, int *result){
    for(int i=0;i<n;i++){
        *result+=*(arr+i);
    }
}

int main(){
    int n,i;
    printf("Enter the number of elements you want in array: ");
    scanf("%d",&n);
    int *arr = (int*)malloc(sizeof(int)*n); //dynamic memory allocation

    if(!arr){
        printf("Memory could not be allocated!");
        exit(0);/**optional*/
        }

    printf("\nEnter %d integers: \n",n);
    for(i=0; i<n; i++){
        printf("Element %d : ",i+1);
        scanf("%d",(arr+i));
    }

    int t=0;
    int *result=&t;
    toplam(n, arr, result);//calling function with dynamic parameters
    printf("Sum of entered numbers: %d",*result);

    free(arr);
    free(result);
    
    return 0;
}