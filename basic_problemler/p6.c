#include <stdio.h>

int main() {

        double kdv,fiyat;
        printf("Vergi dahil fiyatini hesaplamak istediginiz urunun fiyatini giriniz:");
        scanf("%lf",&fiyat);
        printf("Urununuz icin gecerli olan KDV oranini giriniz(orn:15):");
        scanf("%lf",&kdv);

        kdv+=100;
        fiyat=((kdv*fiyat)/100);

        printf("Urununuzun KDVV dahil fiyati:%.2lf Lira",fiyat);

    return 0;
}