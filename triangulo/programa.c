#include <stdio.h>
#include <math.h>
#include "funciones.h"

float ingresarComponente(char comp, int i) {
    float c;
    printf("Ingrese la componente %c del punto %d: ", comp, i);
    scanf("%f", &c);
    return c;
}
void distancia(float *a, float *b, float *c, float p[3][2]) {
    *a = sqrt((p[0][0] - p[1][0]) * (p[0][0] - p[1][0]) + (p[0][1] - p[1][1]) * (p[0][1] - p[1][1]));
    *b = sqrt((p[1][0] - p[2][0]) * (p[1][0] - p[2][0]) + (p[1][1] - p[2][1]) * (p[1][1] - p[2][1]));
    *c = sqrt((p[2][0] - p[0][0]) * (p[2][0] - p[0][0]) + (p[2][1] - p[0][1]) * (p[2][1] - p[0][1]));
}
float calcularPerimetro(float a, float b, float c) {
    return a + b + c;
}
float calcularArea(float p[3][2]) {
    return 0.5f * fabs(
        p[0][0] * (p[1][1] - p[2][1]) +
        p[1][0] * (p[2][1] - p[0][1]) +
        p[2][0] * (p[0][1] - p[1][1])
    );
}
