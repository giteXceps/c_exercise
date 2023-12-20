#include <stdio.h>

int main() {

    double r;
    double alan;
    
    printf("Alanini hesaplamak istediginiz dairenin yaricapini(r) giriniz:");
    scanf("%lf",&r);
    alan=3.14*(r*r);
    printf("Yaricapini girdiginiz dairenin alani %lf'dir", alan);

    return 0;
}

