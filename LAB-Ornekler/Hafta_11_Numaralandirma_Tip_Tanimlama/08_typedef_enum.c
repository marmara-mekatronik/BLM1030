#include <stdio.h>

typedef enum {
    MOTOR_DUR,
    MOTOR_ILERI,
    MOTOR_GERI
} MotorState_t;

int main() {
    // 'enum' anahtar kelimesi yazılmadan doğrudan MotorState_t tipiyle tanımlama:
    MotorState_t sag_motor = MOTOR_ILERI;
    MotorState_t sol_motor = MOTOR_DUR;
    
    printf("=== typedef enum Kullanımı ===\n");
    if (sag_motor == MOTOR_ILERI) {
        printf("Sağ Motor: İLERİ (%d)\n", sag_motor);
    }
    if (sol_motor == MOTOR_DUR) {
        printf("Sol Motor: DUR (%d)\n", sol_motor);
    }
    
    return 0;
}
