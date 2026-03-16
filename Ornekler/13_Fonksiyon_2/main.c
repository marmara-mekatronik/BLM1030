#include <stdio.h>

void sicaklik_goster(int derece);

int set_sicaklik(int derece);

int main() {
    int klima_sicakligi;
    printf("Lütfen klima sıcaklogını giriniz :");
    scanf("%d", &klima_sicakligi);

    int set_klima_sicakligi = set_sicaklik(klima_sicakligi);

    sicaklik_goster(set_klima_sicakligi);

    return 0;
}

void sicaklik_goster(int derece) {
    printf("Klima sıcaklığı : %d", derece);
}

int set_sicaklik(int derece) {
    return derece;
}
