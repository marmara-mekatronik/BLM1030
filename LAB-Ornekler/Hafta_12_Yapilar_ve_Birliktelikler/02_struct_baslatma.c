#include <stdio.h>

struct Robot {
    int id;
    float x_konum;
    float y_konum;
    int pil;
};

int main() {
    // 1. Sıralı Başlatma (Liste Yöntemi)
    struct Robot r1 = {101, 15.5, 20.0, 100};

    // 2. Belirlenmiş Atama (Designated Initializer - C99 ve sonrası) ✅
    // Mekatronik uygulamalarında daha güvenli ve okunaklıdır!
    struct Robot r2 = {
        .id = 102,
        .pil = 95,
        .x_konum = 0.0,
        .y_konum = 5.0
    };

    printf("Robot 1 ID: %d, Konum: (%.1f, %.1f), Pil: %%%d (Sıralı)\n", r1.id, r1.x_konum, r1.y_konum, r1.pil);
    printf("Robot 2 ID: %d, Konum: (%.1f, %.1f), Pil: %%%d (Belirlenmiş)\n", r2.id, r2.x_konum, r2.y_konum, r2.pil);

    return 0;
}
