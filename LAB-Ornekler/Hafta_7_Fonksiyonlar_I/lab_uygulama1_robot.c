#include <stdio.h>

void ileri(void)  { printf(">> Robot ILERI gidiyor...\n"); }
void geri(void)   { printf("<< Robot GERI gidiyor...\n"); }
void dur(void)    { printf("|| Robot DURDU.\n"); }

int main() {
    ileri();
    ileri();
    geri();
    dur();
    return 0;
}
