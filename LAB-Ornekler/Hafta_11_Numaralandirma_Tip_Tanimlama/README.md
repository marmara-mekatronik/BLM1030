# Hafta 11 — Numaralandırma (enum) ve Tip Tanımlama (typedef) Laboratuvar Örnekleri 🚀

Marmara Üniversitesi Mekatronik Mühendisliği Bölümü **Bilgisayar Programlama** dersi kapsamında, 11. hafta konusu olan **enum**, **typedef** ve **sabit boyutlu tam sayılar (stdint.h)** konularına ait sunum içi anlatım ve laboratuvar uygulaması C kaynak kodları bu dizinde yer almaktadır.

---

## 📁 Kod Kataloğu ve Dosya Yapısı

| Dosya Adı | Açıklama | Konu / Kategori |
| :--- | :--- | :--- |
| [01_temel_enum.c](./01_temel_enum.c) | Günleri temsil eden en temel `enum` bildirimi ve kullanımı. | Temel enum Tanımlama |
| [02_enum_arka_plan.c](./02_enum_arka_plan.c) | `enum` sabitlerinin arka plandaki tamsayı (int) karşılıklarını gösteren örnek. | Bellek & Çalışma Mantığı |
| [03_enum_deger_atama.c](./03_enum_deger_atama.c) | Manuel değer atama (atlama) ve ardıl otomatik artış kuralları. | Değer Atama Kuralları |
| [04_robot_durum_makinesi.c](./04_robot_durum_makinesi.c) | AGV robotunun durumlarını (durum makinesi) switch-case ile kontrol etme. | Durum Makineleri (State Machine) |
| [05_typedef_giris.c](./05_typedef_giris.c) | `typedef` anahtar kelimesi ile veri tiplerine yeni takma adlar (alias) verme. | typedef Giriş |
| [06_stdint_kullanimi.c](./06_stdint_kullanimi.c) | `<stdint.h>` sabit boyutlu gömülü sistem tiplerinin kullanımı ve boyut analizi. | Taşınabilir ve Güvenli Kod |
| [07_birim_tanimlamalari.c](./07_birim_tanimlamalari.c) | Volt, Amper, Watt gibi fiziksel büyüklüklerin `typedef` ile soyutlanması. | Mekatronik Uygulamaları |
| [08_typedef_enum.c](./08_typedef_enum.c) | Gömülü sistemlerde yaygın olarak kullanılan `typedef enum` birleşik yapısı. | İleri Seviye Sözdizimi |
| [09_hata_kodlari_sistemi.c](./09_hata_kodlari_sistemi.c) | Fonksiyon geri dönüşlerinde `enum` tabanlı hata kodları yönetimi. | Hata Kontrol Sistemleri |
| [10_lab_robotik_kol.c](./10_lab_robotik_kol.c) | X, Y, Z eksenlerinin (3 eksen) motor durum kontrolü ve hata yönetimi. | **Uygulama 1 (Lab)** |
| [11_lab_sensor_paketi.c](./11_lab_sensor_paketi.c) | Çoklu sensörlerin durum kontrolü ve terminalde kırmızı/sarı hata renkleri. | **Uygulama 2 (Lab)** |
| [12_lab_vites_kontrol.c](./12_lab_vites_kontrol.c) | Otonom araç vites menüsü ve geri görüş kamerası uyarısı. | **Uygulama 3 (Lab)** |
| [13_lab_uart_paketi.c](./13_lab_uart_paketi.c) | Zaman damgalı UART iletişim paketlemesi ve bellek padding analizi. | **Uygulama 4 (Lab)** |

---

## 🛠️ Derleme ve Çalıştırma

Tüm C dosyaları standart **GCC** derleyicisi ile uyumludur. Herhangi bir dosyayı terminalde derleyip çalıştırmak için aşağıdaki adımları izleyebilirsiniz:

1. **Derleme (Örn: Robot Durum Makinesi):**
   ```bash
   gcc 04_robot_durum_makinesi.c -o robot_kontrol
   ```

2. **Çalıştırma:**
   ```bash
   ./robot_kontrol
   ```

---

## 🔬 Detaylı Laboratuvar Uygulamaları Analizi

### 1. Robotik Kol Eksen Durumları ([10_lab_robotik_kol.c](./10_lab_robotik_kol.c))
- **Senaryo:** Robotik kolun X, Y, Z motorlarının durumları `struct` ve `enum` ile izlenir.
- **Ek Geliştirme:** Eksenler dizi şeklinde döngüye sokulmuş, `EKSEN_LIMIT_ASILDI` durumunda terminalde **ANSI kaçış kodları ile kırmızı** acil durum uyarısı yazdırılmıştır.

### 2. Çoklu Sensör Durum Kontrolü ([11_lab_sensor_paketi.c](./11_lab_sensor_paketi.c))
- **Senaryo:** Sıcaklık ve nem sensörlerinin fiziksel ölçümleri, sensörün bağlantı veya veri hata durumlarıyla birlikte döner.
- **Ek Geliştirme:** 3 farklı sensör dizisi taranarak, bağlantı hatasında terminalde parlak kırmızı (`\033[1;31m`), veri hatasında ise sarı (`\033[1;33m`) hata bildirimleri yapılmıştır.

### 3. Araç Vites Kontrol Sistemi ([12_lab_vites_kontrol.c](./12_lab_vites_kontrol.c))
- **Senaryo:** Otonom aracın mevcut vitesine göre motor gücü ayarlanır.
- **Ek Geliştirme:** Kullanıcıya interaktif bir vites seçim menüsü sunulmuştur. `GEAR_REVERSE` (Geri Vites) durumunda "Geri görüş kamerası aktif!" uyarısı eklenmiştir.

### 4. UART İletişim Paketi ([13_lab_uart_paketi.c](./13_lab_uart_paketi.c))
- **Senaryo:** `<stdint.h>` tipleriyle güvenilir 5 baytlık ham haberleşme paketi tasarlanır.
- **Ek Geliştirme:** Pakete 4 baytlık `uint32_t zaman_damgasi` eklenmiştir. Toplam veri boyutu matematiksel olarak 9 bayt olmasına rağmen, 32-bit bellek hizalaması (struct padding) nedeniyle `sizeof` sonucunun neden **12 bayt** çıktığı bellek analiziyle uygulamalı olarak gösterilmiştir.



