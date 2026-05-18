#include <stdio.h>

typedef struct {
    int id;
    int pil;
} Robot_t;

void Kontrol_Et(Robot_t *liste, int n) {
    int kritik_sayac = 0;
    for(int i=0; i<n; i++) {
        if(liste[i].pil < 20) {
            printf("⚠️ Robot %d kritik pil seviyesinde! (%%%d)\n", liste[i].id, liste[i].pil);
            kritik_sayac++;
        }
    }
    if (kritik_sayac == 0) {
        printf("Tüm robotların şarj seviyesi yeterli seviyededir.\n");
    }
}

int main() {
    printf("=== Laboratuvar Uygulaması 1: Robot Envanteri Kontrolü ===\n\n");

    Robot_t robotlar[5] = {
        {.id = 101, .pil = 85},
        {.id = 102, .pil = 15},
        {.id = 103, .pil = 45},
        {.id = 104, .pil = 5},
        {.id = 105, .pil = 60}
    };
    
    // 5 robotluk envanter kontrolü
    Kontrol_Et(robotlar, 5);
    
    return 0;
}
