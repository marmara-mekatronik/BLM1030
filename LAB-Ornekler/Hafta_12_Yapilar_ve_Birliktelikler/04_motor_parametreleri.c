#include <stdio.h>

typedef struct {
    int motor_id;
    int rpm;
    float voltaj;
    float akim;
} Motor_t;

int main() {
    Motor_t m1 = {.motor_id = 1, .rpm = 3000, .voltaj = 12.0, .akim = 1.5};
    
    printf("Motor %d Durumu:\n", m1.motor_id);
    printf("Hız: %d RPM, Güç: %.2f Watt\n", m1.rpm, m1.voltaj * m1.akim);
    
    return 0;
}
