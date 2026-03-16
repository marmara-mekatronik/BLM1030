#include <stdio.h>

int main() {
    printf("=== KISA DEVRE DEGERLENDIRMESI ===\n\n");
    
    int a = 0, b = 5, c = 10;
    int sonuc;
    
    // && operatörü - ilk operand false ise ikinci değerlendirilmez
    printf("&& KISA DEVRE:\n");
    printf("Önce: a = %d, b = %d, c = %d\n", a, b, c);
    
    sonuc = (a != 0) && (b++ > 3);
    // a != 0 yanlış (false) olduğu için b++ ASLA çalışmaz!
    
    printf("sonuc = (a != 0) && (b++ > 3) -> sonuc = %d\n", sonuc);
    printf("Sonra: a = %d, b = %d (b artmadı!)\n\n", a, b);
    
    // Sıfır bölme koruması (mühendislik uygulaması)
    int payda = 0;
    int pay = 10;
    
    printf("SIFIR BOLME KORUMASI:\n");
    printf("payda = %d, pay = %d\n", payda, pay);
    
    if (payda != 0 && (pay / payda) > 2) {
        printf("Bu mesaj asla yazdırılmaz\n");
    } else {
        printf("Güvenli kontrol: payda != 0 olduğu için bölme yapılmadı, program çökmedi!\n");
    }
    
    // || operatörü - ilk operand true ise ikinci değerlendirilmez
    int x = 1, y = 5;
    printf("\n|| KISA DEVRE:\n");
    printf("Önce: x = %d, y = %d\n", x, y);
    
    sonuc = (x == 1) || (y++ > 10);
    // x == 1 doğru (true) olduğu için y++ ASLA çalışmaz!
    
    printf("sonuc = (x == 1) || (y++ > 10) -> sonuc = %d\n", sonuc);
    printf("Sonra: x = %d, y = %d (y artmadı!)\n", x, y);
    
    return 0;
}
