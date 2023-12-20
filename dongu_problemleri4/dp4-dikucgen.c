/*
n=7 degeri icin 2 kenari 7 yildizdan olusan sik ucgen orn:
*
**
***
****
*****
******
*******
*/

int main() {
    
    int i, j, n;

    printf("Karenin bir kenari kac yildizdan olusmali?: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    
}