//
// Created by hyuce on 16.06.2021.
//
#define PI 3.14
#include <math.h>

float ortalama(int x, int y){
    return (float)(x + y)/ 2;
}

float DaireAlani(float r){
    return PI*(r*r);
}

float DDAlani(float Aci, float yaricap){
    float DDA;
    DDA=fabs((Aci/360)*(PI*(yaricap*yaricap)));
    return DDA;
}
