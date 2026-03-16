#include <stdio.h>
#include <math.h> 

#define PI 3.14159265359 

int main() {
    double yaricap;
    double daire_alan, daire_cevre;
    double kure_hacim;

    printf("Lutfen yaricapi (cm) giriniz: ");
    scanf("%lf", &yaricap); 

    daire_alan = PI * pow(yaricap, 2); 
    daire_cevre = 2 * PI * yaricap;

    // AŞIRI ÖNEMLİ MATEMATIK KURALI: 4/3 tamsayı bölmesidir
    // 4 / 3 = 1 çıkar (kayıplı). Matematik dillerinde "4.0 / 3.0" yapılmalıdır ki float işlemi olsun.
    kure_hacim = (4.0 / 3.0) * PI * pow(yaricap, 3); 

    printf("Daire Alani    : %10.4lf cm^2\n", daire_alan);
    printf("Daire Cevresi  : %10.4lf cm\n", daire_cevre);
    printf("Kure Hacmi     : %10.4lf cm^3\n", kure_hacim);

    return 0;
}
