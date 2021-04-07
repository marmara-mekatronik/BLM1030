#include <stdio.h>

int main() {
    int sol_el = 1, sag_el = 2, masa;

    printf("Önce\n");
    printf("Sol El: %d \t Sag El: %d\n", sol_el, sag_el);
    masa = sol_el;
    sol_el = sag_el;
    sag_el = masa;
    printf("Sonra\n");
    printf("Sol El: %d \t Sag El: %d\n", sol_el, sag_el);
    return 0;
}
