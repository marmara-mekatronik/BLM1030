#include <stdio.h>

// Farklı veri tiplerinde üç parametre alan bir motor kontrol fonksiyonu
void dcMotorSur(int port_no, float hiz_pwm, char yon) {
    printf("Motor Port: %d aktif.\n", port_no);
    
    if (yon == 'I') {
        printf("Yon: Ileri, Guc: %.1f%%\n", hiz_pwm);
    } else {
        printf("Yon: Geri, Guc: %.1f%%\n", hiz_pwm);
    }
}

int main() {
    dcMotorSur(1, 80.5, 'I');   // Port 1, %80.5 güç, İleri yön
    dcMotorSur(2, 60.0, 'G');   // Port 2, %60.0 güç, Geri yön
    return 0;
}
