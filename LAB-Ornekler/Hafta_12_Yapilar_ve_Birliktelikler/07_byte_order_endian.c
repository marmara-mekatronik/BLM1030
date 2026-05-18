#include <stdio.h>

typedef union {
    float deger;
    unsigned char bayt[4];
} Sensor_t;

int main() {
    Sensor_t s;
    s.deger = 25.0;  // 0x41C80000 IEEE 754
    
    printf("=== Byte Sırası (Endianness) Analizi ===\n\n");
    printf("Matematiksel float değeri: 25.0\n");
    printf("IEEE 754 standardında hex karşılığı: 0x41C80000\n\n");
    
    printf("Bellekte saklanan bayt sırası (küçükten büyüğe):\n");
    printf("s.bayt[0] : 0x%02X\n", s.bayt[0]);
    printf("s.bayt[1] : 0x%02X\n", s.bayt[1]);
    printf("s.bayt[2] : 0x%02X\n", s.bayt[2]);
    printf("s.bayt[3] : 0x%02X\n\n", s.bayt[3]);
    
    // Bilgisayar mimarisi tespiti
    int test = 1;
    char *p = (char *)&test;
    
    if (*p == 1) {
        printf("Sisteminizin Endian Türü: LITTLE-ENDIAN (Düşük anlamlı bayt başa yazılır)\n");
    } else {
        printf("Sisteminizin Endian Türü: BIG-ENDIAN (Yüksek anlamlı bayt başa yazılır)\n");
    }
    
    return 0;
}
