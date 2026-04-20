#include <stdio.h>
#include <math.h>  // Derleme: gcc dosya.c -lm

#define PI 3.14159265

int main() {
    double aciDerece = 45.0;
    double aciRadyan = aciDerece * PI / 180.0;  // Derece → Radyan dönüşümü
    
    printf("sin(45) = %.4f\n", sin(aciRadyan));              // 0.7071
    printf("Moment  = %.2f Nm\n", 15.0 * sin(aciRadyan));   // Kuvvet momenti hesabı
    return 0;
}
