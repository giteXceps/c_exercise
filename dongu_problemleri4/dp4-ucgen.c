/*


        *
       * *
      * * *
     * * * * 
    * * * * *
   * * * * * *
  * * * * * * *
 * * * * * * * *
* * * * * * * * *

*/

#include <stdio.h>

int main() {
    
    int i,j,k,n;
    printf("Kac satirdan olusan ucgen yazdirmak istersiniz?: ");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        
        k=n-i;
        for(;k>0;k--){
        printf(" ");
        }

        for(j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
}