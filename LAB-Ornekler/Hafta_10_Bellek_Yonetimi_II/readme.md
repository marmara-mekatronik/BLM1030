# Hafta 10: Bellek Yönetimi II - Laboratuvar Örnekleri

Bu klasör, **Bellek Yönetimi II: Dinamik Bellek ve 2D Diziler** sunumunda işlenen kod örneklerini ve laboratuvar çalışmalarını içermektedir.

## 📂 Dosya İçerikleri

| Dosya | Açıklama | Ana Konu |
| :--- | :--- | :--- |
| `lab1_sensor_dizisi.c` | Dinamik sensör verisi toplama uygulaması | `malloc`, `free`, `NULL` kontrolü |
| `lab2_realloc_buyutme.c` | Kapasitesi çalışma zamanında artan dizi | `realloc`, Güvenli boyut artırma |
| `lab3_matris_transpozu.c` | M x N matrisin transpozunu alma | `double pointer`, 2D Dinamik Diziler |
| `matris_tek_blok.c` | Tek blok (1D) üzerinden 2D matris | Önbellek dostu, Ardışık bellek |
| `pwm_control.c` | Motor PWM değerlerini sıfırlayarak başlatma | `calloc`, Mekatronik Uygulaması |
| `pointer_in_function.c` | Fonksiyon içinde bellek ayırma | `int **ptr`, İşaretçi hiyerarşisi |

## 🚀 Derleme ve Çalıştırma

Örnekleri derlemek için terminalden şu komutları kullanabilirsiniz:

```bash
# Lab 1 için örnek derleme
gcc lab1_sensor_dizisi.c -o lab1
./lab1

# Bellek hatalarını kontrol etmek için (Valgrind yüklü ise):
valgrind --leak-check=full ./lab1
```

## ⚠️ Önemli Hatırlatmalar
1. Her `malloc`/`calloc` çağrısından sonra mutlaka **`NULL` kontrolü** yapın.
2. Ayrılan her bellek bloğunu, işiniz bittiğinde **`free()`** ile serbest bırakın.
3. Serbest bıraktığınız işaretçileri **`NULL`**'a eşitleyerek "Dangling Pointer" hatalarını önleyin.
