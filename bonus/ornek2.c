#include <stdio.h>
#include <string.h>


int main() {
    const char url[] = "https://www.marmara.edu.tr";
    const char ch = '.';

    char *dom;
    dom = strchr(url, ch);
    printf("%s", dom);

    return 0;
}
