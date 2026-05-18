# Hafta 12 — Yapılar (Structures) ve Birliktelikler (Unions) Laboratuvar Örnekleri 🚀

Marmara Üniversitesi Mekatronik Mühendisliği Bölümü **Bilgisayar Programlama** dersi kapsamında, 12. hafta konusu olan **Yapılar (struct)**, **Hizalama ve Padding**, **Birliktelikler (union)** ve **Bit Sahaları (bitfields)** konularına ait sunum içi anlatım ve laboratuvar uygulaması C kaynak kodları bu dizinde yer almaktadır.

---

## 📁 Kod Kataloğu ve Dosya Yapısı

| Dosya Adı | Açıklama | Konu / Kategori |
| :--- | :--- | :--- |
| [01_temel_struct.c](./01_temel_struct.c) | En temel `struct` bildirimi, nesne türetme ve nokta (`.`) operatörüyle üye erişimi. | Temel struct Bildirimi |
| [02_struct_baslatma.c](./02_struct_baslatma.c) | Sıralı (liste) başlatma ve C99 belirlenmiş atama (designated initialization) yöntemleri. | struct Başlatma |
| [03_typedef_kullanimi.c](./03_typedef_kullanimi.c) | `typedef` ile yapı tiplerine takma isim atama ve yapılar arası kopyalama (shallow copy). | typedef ve Atama |
| [04_motor_parametreleri.c](./04_motor_parametreleri.c) | DC motor parametrelerinin struct içinde saklanması ve motor güç analizi. | Temel Mekatronik Uygulaması |
| [05_struct_padding_analizi.c](./05_struct_padding_analizi.c) | Eleman sıralamasının bellek dolgusu (padding) ve hizalama (alignment) üzerindeki etkisi. | Bellek Hizalama & Padding |
| [06_pragma_pack_kullanimi.c](./06_pragma_pack_kullanimi.c) | `#pragma pack(1)` komutuyla padding'in kaldırılarak yapıların haberleşme için sıkıştırılması. | Packed Struct (Sıkıştırma) |
| [07_byte_order_endian.c](./07_byte_order_endian.c) | IEEE 754 float temsilini union ile baytlarına ayıran Little-endian vs Big-endian analizi. | Endianness / Bayt Sırası |
| [08_struct_pointer_ok.c](./08_struct_pointer_ok.c) | Yapı işaretçileri (struct pointers), ok operatörü (`->`) ve adresle parametre geçişi. | Yapı İşaretçileri |
| [09_struct_dinamik_tahsis.c](./09_struct_dinamik_tahsis.c) | Yapı nesnelerinin dinamik olarak bellekte yer ayrılması (`malloc`) ve temizlenmesi (`free`). | Dinamik Bellek Yönetimi |
| [10_struct_dondurme.c](./10_struct_dondurme.c) | Fonksiyonlardan değer (value) veya heap adresi (pointer) ile struct döndürme yöntemleri. | Fonksiyondan Yapı Döndürme |
| [11_union_temel.c](./11_union_temel.c) | `union` veri yapısının bellek hücresi paylaşımı ve ASCII karakter dönüşüm mekanizması. | Union Çalışma Mantığı |
| [12_bit_sahasi_register.c](./12_bit_sahasi_register.c) | Bit sahaları (bitfields) aracılığıyla donanım status register erişimi ve bit düzeyinde taşma analizi. | Bit Sahaları (Bitfields) |
| [13_lab_robot_envanteri.c](./13_lab_robot_envanteri.c) | 5 robotluk envanterin struct dizisiyle tutulması ve düşük pil kontrolü yapan fonksiyon. | **Uygulama 1 (Lab)** |
| [14_lab_imu_veri_ayristirma.c](./14_lab_imu_veri_ayristirma.c) | Union kullanarak UART'tan gelen 4 baytlık veriyi float sıcaklığa ve tamsayıya dönüştürme. | **Uygulama 2 (Lab)** |
| [15_lab_motor_test_istasyonu.c](./15_lab_motor_test_istasyonu.c) | Dinamik dizi (`malloc`) ile motorların taranması, aşırı ısınma ve akım istatistiklerinin analizi. | **Uygulama 3 (Lab)** |
| [16_lab_drone_navigasyon.c](./16_lab_drone_navigasyon.c) | İç içe (nested) yapılarla tasarlanmış otonom drone navigasyonu ve uçuş-batarya simülasyonu. | **Uygulama 4 (Lab)** |

---

## 🛠️ Derleme ve Çalıştırma

Tüm C kaynak dosyaları standart **GCC** derleyicisi ile doğrudan uyumludur. Derleme ve çalıştırma adımları:

1. **Derleme (Örn: Drone Navigasyon ve Uçuş Simülasyonu):**
   ```bash
   gcc 16_lab_drone_navigasyon.c -o drone_sim
   ```

2. **Çalıştırma:**
   ```bash
   ./drone_sim
   ```

---

## 🔬 Detaylı Laboratuvar Uygulamaları Analizi

### 1. Robot Envanteri Kontrolü ([13_lab_robot_envanteri.c](./13_lab_robot_envanteri.c))
- **Senaryo:** 5 farklı robotun ID ve Pil seviyeleri `struct` veri tipinde saklanır.
- **Detaylar:** `Kontrol_Et` fonksiyonu yapı dizisinin adresini (`Robot_t *liste`) alarak verimli bir şekilde şarj seviyesi %20'nin altında olan robotları listeler.

### 2. IMU Veri Ayrıştırma - Union ([14_lab_imu_veri_ayristirma.c](./14_lab_imu_veri_ayristirma.c))
- **Senaryo:** UART veya SPI portundan gelen 4 baytlık ham sensör verisi (`0x00, 0x00, 0x20, 0x41`), `union` yapısıyla dönüştürülür.
- **Detaylar:** Dönüşüm sonucunda baytların float karşılığı olan `25.0 C` değeri doğrudan matematiksel hiçbir işlem olmaksızın okunur. Ayrıca sunumdaki geliştirme senaryosuna uygun olarak yapıya `int tam_sayi` eklenerek aynı bellek hücresinin hex tamsayı karşılığı da ekrana yazdırılmıştır.

### 3. Motor Test İstasyonu ([15_lab_motor_test_istasyonu.c](./15_lab_motor_test_istasyonu.c))
- **Senaryo:** 3 DC motorun RPM, akım ve sıcaklık parametreleri izlenir.
- **Detaylar:** Sunumda belirtilen geliştirme senaryolarına uygun olarak; motor dizisi heap üzerinde dinamik olarak (`malloc`) tahsis edilmiş, test aşamasında sıcaklığı 80°C'yi aşan motorlar için **ANSI kırmızı kaçış kodlarıyla** acil soğutma uyarısı verilmiş ve tüm motorların ortalama akım/sıcaklık istatistikleri hesaplanmıştır.

### 4. Drone Navigasyon Sistemi - İç İçe Struct ([16_lab_drone_navigasyon.c](./16_lab_drone_navigasyon.c))
- **Senaryo:** Koordinat, motor ve drone alt sistemleri iç içe yapılarla (nested struct) modellenmiştir.
- **Detaylar:** Geliştirme senaryosuna göre hazırlanan **Uçuş Simülasyonu** kapsamında; drone her adımda hedefe `30` birim (X ekseninde) ve `60` birim (Y ekseninde) yaklaşmakta, bu süreçte batarya (`pil`) tüketimi gerçekleşmektedir. Batarya %20'ye düştüğünde veya hedefe ulaşıldığında otonom olarak `İNDİ` durumuna geçilmekte ve motor devirleri sıfırlanmaktadır.

---

👨‍🏫 **Marmara Üniversitesi - Mekatronik Mühendisliği Bölümü**  
**Ders Yürüten:** Dr. Öğr. Üyesi Hüseyin YÜCE  
