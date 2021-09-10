#include <stdio.h>
#include <stdlib.h>
#include <linux/version.h>

int main() {
#ifdef linux
    printf("Linux İşletim Sistemi\n");
#elif _WIN32
    printf("Windows İşletim Sistemi");
#elif __APPLE__
    printf("MAC OS X İşletim Sistemi");
#elif __ANDROID__
    printf("Android İşletim Sistemi");
#else
    printf("Diğer İşletim Sistemi");
#endif

#if LINUX_VERSION_CODE == KERNEL_VERSION(5,10,61)
printf("Bu Kernel Sürümünde çalışma");
#else
    printf("Uygun Linux Çekirdeği");
#endif



    return 0;
}
