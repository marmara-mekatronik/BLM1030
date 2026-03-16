#include <stdio.h>
#include <stdlib.h> // malloc, free, atof için gerekli

// Hangi tür sensör verisi olduğunu belirtmek için enum yapısı
typedef enum {
    SICAKLIK,
    NEM,
    BASINC
} SensorTipi;

// Tek bir sensör ölçümünü temsil eden yapı (struct)
typedef struct {
    int grup_id;      // Hangi sensör grubuna ait olduğu (0, 1, veya 2)
    SensorTipi tip;  // Ölçüm tipi (SICAKLIK, NEM, veya BASINC)
    double deger;     // Ölçümün sayısal değeri
} SensorVerisi;

// Fonksiyon prototipleri
SensorVerisi* enYuksekSicakligiBul(SensorVerisi** veriler, int toplam_veri_sayisi);
const char* sensorTipiGetir(SensorTipi tip);

int main(int argc, char *argv[]) {
    // Komut satırından 9 adet veri girilmesi gerekiyor (program adı hariç).
    // Her grup için 3 veri (sıcaklık, nem, basınç) x 3 grup = 9 veri.
    if (argc != 10) {
        printf("Kullanim: %s <g1_sic> <g1_nem> <g1_bas> <g2_sic> <g2_nem> <g2_bas> <g3_sic> <g3_nem> <g3_bas>\n", argv[0]);
        return 1; // Hata kodu ile çıkış
    }

    const int GRUP_SAYISI = 3;
    const int VERI_TURU_SAYISI = 3;
    const int TOPLAM_VERI_SAYISI = GRUP_SAYISI * VERI_TURU_SAYISI;

    // Double Pointer (pointer'a işaret eden pointer) tanımı.
    // Bu, SensorVerisi pointer'larından oluşan bir dizi tutacak.
    SensorVerisi** tum_veriler;

    // Dinamik olarak pointer dizisi için bellek ayırıyoruz (malloc).
    tum_veriler = (SensorVerisi**)malloc(TOPLAM_VERI_SAYISI * sizeof(SensorVerisi*));
    if (tum_veriler == NULL) {
        printf("Ana pointer dizisi icin bellek ayrılamadı!\n");
        return 1;
    }

    // Komut satırı argümanlarını döngü ile işleyelim
    for (int i = 0; i < TOPLAM_VERI_SAYISI; i++) {
        // Her bir sensör verisi struct'ı için ayrı ayrı bellek ayırıyoruz.
        tum_veriler[i] = (SensorVerisi*)malloc(sizeof(SensorVerisi));
        if (tum_veriler[i] == NULL) {
            printf("%d. veri icin bellek ayrılamadı!\n", i);
            // Önceki ayırmaları temizle ve çık
            for(int j = 0; j < i; j++) free(tum_veriler[j]);
            free(tum_veriler);
            return 1;
        }

        tum_veriler[i]->grup_id = i / GRUP_SAYISI;       // Grup ID'si (0, 1, 2)
        tum_veriler[i]->tip = (SensorTipi)(i % VERI_TURU_SAYISI); // Sensör Tipi (0, 1, 2) -> (SICAKLIK, NEM, BASINC)
        tum_veriler[i]->deger = atof(argv[i + 1]);      // String'i double'a çevir
    }

    // Dosyaya yazma işlemi
    FILE* dosya = fopen("sensor_verileri.txt", "w");
    if (dosya == NULL) {
        printf("Dosya acilamadi!\n");
        // Belleği serbest bırak ve çık
    } else {
        fprintf(dosya, "--- Sensor Veri Raporu ---\n");
        for (int i = 0; i < TOPLAM_VERI_SAYISI; i++) {
            fprintf(dosya, "Grup: %d, Tip: %-10s, Değer: %.2f\n",
                    tum_veriler[i]->grup_id + 1, // Kullanıcı dostu olması için +1
                    sensorTipiGetir(tum_veriler[i]->tip),
                    tum_veriler[i]->deger);
        }
        fclose(dosya);
        printf("Veriler basariyla 'sensor_verileri.txt' dosyasina yazildi.\n");
    }

    // Geri dönüşü struct pointer olan fonksiyonu çağırma
    SensorVerisi* en_yuksek_sicaklik_verisi = enYuksekSicakligiBul(tum_veriler, TOPLAM_VERI_SAYISI);

    if (en_yuksek_sicaklik_verisi != NULL) {
        printf("\n--- En Yuksek Sicaklik Bilgisi ---\n");
        printf("Grup: %d\n", en_yuksek_sicaklik_verisi->grup_id + 1);
        printf("Değer: %.2f C\n", en_yuksek_sicaklik_verisi->deger);
    } else {
        printf("Sicaklik verisi bulunamadi.\n");
    }

    // Ayrılan belleği serbest bırakma (çok önemli!)
    // Önce içteki pointer'ları, sonra dıştaki ana pointer'ı free ediyoruz.
    for (int i = 0; i < TOPLAM_VERI_SAYISI; i++) {
        free(tum_veriler[i]);
    }
    free(tum_veriler);

    return 0; // Başarılı çıkış
}

/**
 * @brief Verilen sensör verileri dizisi içinde en yüksek sıcaklık değerine sahip
 * olan SensorVerisi yapısının adresini (pointer) döndürür.
 *
 * @param veriler SensorVerisi pointer'larından oluşan bir dizi (double pointer).
 * @param toplam_veri_sayisi Dizideki toplam eleman sayısı.
 * @return En yüksek sıcaklığa sahip SensorVerisi'nin pointer'ı. Eğer sıcaklık verisi yoksa NULL döner.
 */
SensorVerisi* enYuksekSicakligiBul(SensorVerisi** veriler, int toplam_veri_sayisi) {
    SensorVerisi* en_yuksek_ptr = NULL;
    double max_sicaklik = -999.0; // Başlangıç için çok düşük bir değer

    for (int i = 0; i < toplam_veri_sayisi; i++) {
        // Sadece SICAKLIK tipindeki verileri dikkate al
        if (veriler[i]->tip == SICAKLIK) {
            if (en_yuksek_ptr == NULL || veriler[i]->deger > max_sicaklik) {
                max_sicaklik = veriler[i]->deger;
                en_yuksek_ptr = veriler[i];
            }
        }
    }
    return en_yuksek_ptr;
}

/**
 * @brief SensorTipi enum'ını okunabilir bir string'e çevirir.
 * @param tip SensorTipi enum değeri.
 * @return Sensör tipinin string karşılığı.
 */
const char* sensorTipiGetir(SensorTipi tip) {
    switch (tip) {
        case SICAKLIK: return "Sıcaklık";
        case NEM:      return "Nem";
        case BASINC:   return "Basınç";
        default:       return "Bilinmeyen";
    }
}
